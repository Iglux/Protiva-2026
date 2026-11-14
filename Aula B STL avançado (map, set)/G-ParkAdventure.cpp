#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h;

    cin >> n >> h; // n = quantidade de brinquedos, h = altura

    int resposta = 0;

    for (int i = 0; i < n; i++) { // le a altura minima de cada brinquedo
        int a;
        cin >> a;

        if (h >= a) resposta++; // pode ir se for pelo menos da altura minima
    }

    cout << resposta << endl;
    return 0;
}
