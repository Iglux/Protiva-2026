// Problema F - Ferry Loading III

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int casos;
    cin >> casos;

    for(int tc = 0; tc < casos; tc++){
        // n, t, m do enunciado
        int capacidade, travessia, carros;
        cin >> capacidade >> travessia >> carros;

        // indexados pelo ID do carro, que é a ordem de entrada
        vector<int> chegada(carros);
        vector<int> resposta(carros);

        // espera[0] = margem esquerda, espera[1] = direita
        queue<int> espera[2];

        for(int i = 0; i < carros; i++){
            string margem;
            cin >> chegada[i] >> margem;

            int lado = (margem[0] == 'r') ? 1 : 0;

            espera[lado].push(i);
        }

        int atual = 0;
        int tempo = 0;
        int entregues = 0;

        while(entregues < carros){
            // embarca quem já chegou (chegada <= tempo), até a capacidade
            vector<int> embarcados;
            while((int)embarcados.size() < capacidade &&
                  !espera[atual].empty() &&
                  chegada[espera[atual].front()] <= tempo){

                embarcados.push_back(espera[atual].front());
                espera[atual].pop();
            }

            // Caso 1: embarca e atravessa
            if(!embarcados.empty()){
                tempo += travessia;

                for(int id : embarcados){
                    resposta[id] = tempo;
                }
                entregues += embarcados.size();

                atual ^= 1;
                continue;
            }

            // Caso 2: nada aqui, mas há carro do outro lado -> atravessa vazia
            int outra = atual ^ 1;
            if(!espera[outra].empty() && chegada[espera[outra].front()] <= tempo){
                tempo += travessia;
                atual = outra;
                continue;
            }

            // Caso 3: ninguém esperando -> salta para a próxima chegada
            int proxima = LLONG_MAX;
            for(int lado = 0; lado < 2; lado++){
                if(!espera[lado].empty()){
                    proxima = min(proxima, chegada[espera[lado].front()]);
                }
            }
            tempo = proxima;
        }

        // linha em branco entre casos (não depois do último)
        if(tc > 0){
            cout << endl;
        }

        for(int i = 0; i < carros; i++){
            cout << resposta[i] << endl;
        }
    }

    return 0;
}
