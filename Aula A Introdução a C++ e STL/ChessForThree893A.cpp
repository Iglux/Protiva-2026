#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    
    cin >> n; // Pegamos o numero de Jogos

    int spectador = 3; // O primeiro jogo começa com Carl espectando
    
    bool possivel = true; //Por enquanto nenhuma condição foi quebrada
    //então assumimos que o jogo é possível

    while(n--){
        int vencedor;
        cin >> vencedor; // Vemos quem vemos o Jogo
        
        if(!possivel){
            continue;
        }

        if(spectador == vencedor){ //Se mostra que o espectador venceu
            possivel = false; //Concluimos que o jogo não é possível
        }else{ // Se não colocamos quem sera o novo espectador
            if(spectador + vencedor == 3){ // (1-Alex e 2-Bob ganharam ou estavam assistindo)
                spectador = 3; //(3-Carl vai espectar)
            } else if(spectador + vencedor == 4){ // (1-Alex e 3-Carl ganharam ou estavam assistindo)
                spectador = 2; //(2-Bob vai espectar)
            } else if(spectador + vencedor == 5){ // (2-Bob e 3-Carl ganharam ou estavam assistindo)
                spectador = 1; //(1-Alex vai espectar)
            }
        }

    }

    if(possivel){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

}