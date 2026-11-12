#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main(){
    // Otimiza a leitura e escrita de dados
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Lê a quantidade de casos teste
    int n;
    cin >> n;

    // Cria um set para armazenar os números distintos
    set<int> s;

    // Percorre todos os números da entrada
    for(int i = 0; i < n; i++){
        // Lê o número atual
        int x;
        cin >> x;

        // Insere o número no set
        // Se ele já existir, não será inserido novamente
        s.insert(x);
    }
    // O tamanho do set representa a quantidade
    // de números distintos da sequência
    cout << s.size() << endl;

    return 0;
}
