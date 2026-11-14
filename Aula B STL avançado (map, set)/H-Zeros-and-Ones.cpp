#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long par = 0;   // subvetores que terminam aqui com quantidade PAR de uns
    long long impar = 0; // subvetores que terminam aqui com quantidade IMPAR de uns
    long long resposta = 0;

    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;

        par++; // comeca um subvetor novo nesta posicao (antes de contar b, tem 0 uns: par)

        if (b == 1) swap(par, impar); // um 1 inverte a paridade de todos: par vira impar e impar vira par

        resposta += impar; // conta os impares que terminam nesta posicao
    }

    cout << resposta << endl;
    return 0;
}
