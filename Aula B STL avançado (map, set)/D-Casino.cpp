// Problema D - Playing in a Casino

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        // guardamos transposto: colunas[j] é a coluna j, já pronta para ordenar
        vector<vector<int>> colunas(m, vector<int>(n));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> colunas[j][i];
            }
        }

        int total = 0;

        for(int j = 0; j < m; j++){
            vector<int>& coluna = colunas[j];

            // ordenada, cada a[i] é o maior dos pares com todos os anteriores
            sort(coluna.begin(), coluna.end());

            int somaPrefixo = 0;

            for(int i = 0; i < n; i++){
                // |a[i] - a[k]| = a[i] - a[k] para k < i, logo i*a[i] - soma dos anteriores
                total += coluna[i] * i - somaPrefixo;
                somaPrefixo += coluna[i];
            }
        }

        cout << total << endl;
    }

    return 0;
}
