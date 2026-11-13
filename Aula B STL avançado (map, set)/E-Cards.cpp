// Problema E - Throwing cards away I

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    while(cin >> n && n != 0){

        // topo do baralho = front da fila
        queue<int> baralho;
        for(int i = 1; i <= n; i++){
            baralho.push(i);
        }

        vector<int> descartadas;

        while(baralho.size() >= 2){

            // regra 1: descarta o topo
            descartadas.push_back(baralho.front());
            baralho.pop();

            // regra 2: o novo topo vai para o fundo
            baralho.push(baralho.front());
            baralho.pop();
        }

        // "Discarded cards: 1, 3, 5" — sem vírgula sobrando
        cout << "Discarded cards:";
        for(int i = 0; i < (int)descartadas.size(); i++){
            cout << (i == 0 ? " " : ", ") << descartadas[i];
        }
        cout << endl;

        cout << "Remaining card: " << baralho.front() << endl;
    }

    return 0;
}
