#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, aux;
    
    cin >> n >> m; // Pegamos o numero de Frutas e Salas

    vector<int> minimo(m,1);// Vamos criar um vetor o numero minimo de alunos
    //em cada sala

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> aux; // O numero de alunos que Gostam da fruta i
            //na sala j

            minimo[j] = max(minimo[j],aux);
            //Se 10 alunos gostam de pera nessa sala
            //E 5 alunos gostam de Maça
            //Então há no minimo 10 alunos
            //Pois 5 alunos podem gostar de ambas as frutas
            //Então guardamos sempre o maior valor
        }
    }

    int resposta=0;
    for(int x : minimo){ //Somamos o minimo de cada sala
        resposta += x;
    }

    cout << resposta << endl;

}