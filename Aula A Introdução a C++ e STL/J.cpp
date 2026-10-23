// Link do exercício: https://codeforces.com/gym/106073/problem/J 

/*
- COMO RESOLVER?
Simplesmente criaremos um vetor booleano com 5 posições (para podermos acessar a posições de 1 a 4) indicando os números que aparecem
Assim leremos as 10 entradas e marcaremos como 'true' a posição do vetor do valor correspondente.
No fim da leitura, percorremos o vetor booleano verificando quantos valores no vetor (de 1 a 4), são falsos.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){


    // Vetor para marcar os valores que apareceram
    // 0 ... 4 , mas usaremos apenas de 1 ... 4
    vector<bool> apareceu(5, false); 

    // Leitura dos 10 valores
    for(int i=0;i<10;i++){
        int temp;
        cin >> temp;
        apareceu[temp] = true; // Marcamos como lido o valor 'temp'
    }

    // Percorremos o vetor verificando quais dificuldades de exercício devem ser adicionadas no exame
    int count=0;
    for(int i=1;i<5;i++){
        if(!apareceu[i]) count++;
    }

    cout << count << endl;

    return 0;

}