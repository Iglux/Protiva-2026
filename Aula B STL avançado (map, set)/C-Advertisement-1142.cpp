#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main(){
    // Otimiza a leitura e escrita de dados
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Lê a quantidade de placas
    int n;
    cin >> n;

    // Armazena a altura de cada placa
    // São criadas n + 1 posições para adicionar uma placa
    // fictícia de altura 0 no final
    vector<int> h(n + 1);

    for(int i = 0; i < n; i++){
        cin >> h[i];
    }

    // A placa fictícia força a retirada de todos
    // os elementos restantes da pilha no final
    h[n] = 0;

    // Pilha que armazena os índices das placas
    stack<int> st;

    // Guarda a maior área encontrada
    int ans = 0;

    // Percorre todas as placas, incluindo a fictícia
    for(int i = 0; i <= n; i++){

        // Enquanto a altura atual for menor que a altura
        // da placa no topo da pilha, podemos calcular
        // o maior retângulo possível para aquela altura
        while(!st.empty() && h[i] < h[st.top()]){

            // Recupera a altura do retângulo
            int altura = h[st.top()];

            // Remove o índice da pilha
            st.pop();

            // Calcula a largura do retângulo
            // Se a pilha estiver vazia, começa na posição 0
            int largura;

            if(st.empty()){
                largura = i;
            }
            else{
                // O índice do topo indica a última placa
                // anterior que é menor ou igual à altura
                largura = i - st.top() - 1;
            }
            // Calcula a área do retângulo atual
            int area = altura * largura;
            
            // Atualiza a maior área encontrada
            ans = max(ans, area);
        }
        // Insere o índice atual na pilha
        st.push(i);
    }
    // Imprime a maior área possível
    cout << ans << '\n';

    return 0;
}
