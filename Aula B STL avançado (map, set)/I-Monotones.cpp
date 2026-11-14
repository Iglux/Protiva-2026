#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;

    cin >> n >> s;

    long long resposta = 0;
    int i = 0;

    while (i < n) {
        int j = i;

        while (j < n && s[j] == s[i]) j++; // avanca j ate o fim do bloco de letras iguais

        int tamanho = j - i;

        if (s[i] == 'a' && tamanho >= 2) resposta += tamanho; // so conta blocos de 'a' com 2 ou mais letras
        i = j; // pula para o inicio do proximo bloco
    }

    cout << resposta << endl;
    return 0;
}
