#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main(){
    // Otimiza a leitura e escrita de dados
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Cria uma fila de números inteiros
    queue<int> fila;

    // Lê a quantidade de casos teste
    int t;
    cin >> t;

    // Executa os casos
    while(t--){

        // Lê o tipo da operação
        int op;
        cin >> op;

        // Operação 1: Enqueue
        // Insere um número no final da fila
        if(op == 1){
            int n;
            cin >> n;

            fila.push(n);
        }
        // Operação 2: Dequeue
        // Remove o primeiro elemento da fila
        else if(op == 2){
            // Só remove se a fila não estiver vazia
            if(!fila.empty()){
                fila.pop();
            }
        }
        // Operação 3: Consulta o primeiro elemento
        else if(op == 3){
            // Verifica se existe algum elemento na fila
            if(!fila.empty()){
                // Imprime o primeiro elemento sem removê-lo
                cout << fila.front() << endl;
            }else{
                // Se estiver vazia imprime Empty
                cout << "Empty!" << endl;
            }
        }
    }
    return 0;
}
