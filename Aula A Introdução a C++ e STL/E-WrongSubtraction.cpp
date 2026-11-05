#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, k; 
    cin >> n >> k; // Coleta das entradas

    while(k--) // K = K-1 a cada iteração | Para quando K == 0
    { 
        if(n%10 == 0) // Se o resto da divisão de N por 10 for 0 então o úgltimo diito é um 0
            n = n/10;
        else 
            n--;
    }
    cout << n << endl;
    return 0;
}