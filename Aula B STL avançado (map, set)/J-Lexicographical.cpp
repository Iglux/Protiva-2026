#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int k;

    cin >> s >> k;
    int n = s.size();

    for (int r = 0; r < k && r < n; r++) { // cada resto r forma um grupo que so troca entre si
        string grupo;

        for (int i = r; i < n; i += k) {
            grupo += s[i];
        }

        sort(grupo.begin(), grupo.end()); // trocas livres dentro do grupo permitem qualquer ordem

        int idx = 0;
        for (int i = r; i < n; i += k) { // devolve as letras ordenadas nas mesmas posicoes
            s[i] = grupo[idx++];
        }
    }

    cout << s << endl;
    return 0;
}
