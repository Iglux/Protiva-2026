#include <bits/stdc++.h>
using namespace std;

/*
 *
 * 
Two-gram is an ordered pair (i.e. string of length two) of capital Latin letters. For example, "AZ", "AA", "ZA" — three distinct two-grams.

You are given a string s consisting of n capital Latin letters. Your task is to find any two-gram contained in the given string as a 
substring (i.e. two consecutive characters of the string) maximal number of times. For example, for string s = "BBAABBBA" the answer is two-gram "BB", which contained in s three 
times. In other words, find any most frequent two-gram. Note that occurrences of the two-gram can overlap with each other.

Input
The first line of the input contains integer number n (2 ≤ n ≤ 100) — the length of string s. The second line of the input contains the string s
consisting of n capital Latin letters.

Output
Print the only line containing exactly two capital Latin letters — any two-gram contained in the given string s as a 
substring (i.e. two consecutive characters of the string) maximal number of times.
*/

int main(){
    int x;
    string palavra;
    // Definição de strings x(tamanho da string) e palavra(a string em si)

    cin >> x;
    cin >> palavra;
    //recebemos as duas entradas, note durante o codigo que nunca chegaremos a usar a variavel.




    string resposta = palavra.substr(0,2);
    /*vamos definir uma string minima, como resposta, para casos em que não exista
     * resposta "melhor" */

    int max = 0;// variavel auxiliar para encontrar o maximo de occorencias de uma "two-gram"
                //
    
for(int i = 0; i+1 < palavra.size(); i++){
    /*loop principal, iniciado em +1, para conseguirmos comparar a segunda letra
     * sem erros de acesso fora do loop.
     *
     * O loop só para quando chegarmos até o tamanho total da palavra (palavra.size());
     */

    int contador = 0;// variavel temporaria para contar todas as ocorrencias de um two-gram, resetada toda interação
    for(int j = 0; j+1 < palavra.size(); j++){
      /*loop segundario, seguindo a mesma logica de acesso do loop segundario
       *
       *
       *
       */
        if (j == i)// Se e o i for igual ao j, estamos acessando o mesmo two-gram, não vamos compara-los
        continue;

        if(palavra[i] == palavra[j] && palavra[i+1] == palavra[j+1]){ 
          /* Se aletra do primeiro two-gram (palavra[i+1] do loop) for igual a letra do segundo two-gram(palavra[j+1] do loop). E
           * a segunda letra do primeiro two-gram(palavra[i+1+1] do loop+if) for igual a segunda letra do segundo two-gram(palavra[j+1+1] do loop+if), então temos dois two-gram iguais.
           *
           *
           */
            contador++;//aumentamos o contador

            if(contador > max){/*verificamos se o contador temporario, ja ultrapassou o maximo ja visto
                                se não, ele ignora
                                */
                max = contador;//se sim, ele troca o max para aquele contador.
                
                resposta.clear();//nos limpamos a nossa resposta
                resposta.push_back(palavra[i]);//e então salvamos essa nova melhor resposta
                resposta.push_back(palavra[i+1]);
            }
        }
    }
}

cout << resposta << endl;//saida da resposta seguida de um \m



}
