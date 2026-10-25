#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    // Otimiza a entrada e saída de dados
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Quantidade de casos de teste
    int t;
    cin >> t;

    while (t--)
    {
        // Intervalo [l, r] de números disponíveis
        int l, r;
        cin >> l >> r;

        // Se o intervalo contém apenas um número,
        // ele obrigatoriamente é a resposta
        if (l == r)
        {
            cout << r << endl;
            continue;
        }

        // Números de um único dígito possuem luckiness 0,
        // pois o maior e o menor dígito são iguais.
        // Portanto, qualquer número do intervalo é válido.
        if (r < 10 && l < 10)
        {
            cout << l << endl;
            continue;
        }

        // Maior luckiness encontrada até o momento
        int maior = -1;

        // Número que possui a maior luckiness encontrada
        int ans = l;

        // Percorre todos os números do intervalo [l, r]
        for (int i = l; i <= r; i++)
        {
            // Converte o número atual para string
            string s = to_string(i);

            // Ordena os dígitos em ordem crescente.
            // Assim, o primeiro será o menor dígito
            // e o último será o maior.
            sort(s.begin(), s.end());

            // Calcula a luckiness:
            // maior dígito - menor dígito.
            // Subtraímos '0' para converter char em int.
            int dif = (s[s.size() - 1] - '0') - (s[0] - '0');

            // Se encontramos uma luckiness maior,
            // atualizamos a melhor diferença e sua posição.
            if (dif > maior)
            {
                maior = dif;
                ans = i;
            }

            // A maior diferença possível entre dígitos é 9.
            // Portanto, se encontramos luckiness 9,
            // já temos uma resposta ótima e podemos parar.
            if (dif == 9)
            {
                break;
            }
        }

        // Imprime o número com maior luckiness
        cout << ans << endl;
    }

    return 0;
}
