#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    // Otimiza a entrada e saída de dados
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin>>N; //escanear a quantidade de niveis
    vector<double> I_n(N); //vetor para guardar o desbalanceamento 
    //de cada nível para as queries

    double C_n=0, V_n=0; // Somatorios de c_i e v_i

    for(int i = 0; i<N; i++){
        //escaneia o c_i e v_i do nivel i
        //adiciona eles ao somatorios
        //e já calcula o desbalanceamento do nivel i
        double c_i,v_i; 
        cin>>c_i>>v_i;

        C_n += c_i;
        V_n += v_i;
        I_n[i] = (C_n - V_n)/(C_n + V_n);
    }

    int Q; cin>>Q; //queries
    for(int j = 0; j<Q; j++){
        //para cada query j retorna a resposta
        //correta do sinal; obs: j-1 pois o indices
        //do exercicios iniciam no 1 ao inves de 0 para a array
        int n_j; cin>>n_j;

        if(I_n[n_j-1] > 0) cout<<"COMPRA"<<endl;
        else if(I_n[n_j-1] < 0) cout<<"VENDA"<<endl;
        else cout<<"NEUTRO"<<endl;
    }

    return 0;
}
