#include <iostream>
using namespace std;

int main(){
    int n, soma, posicao1, posicao2, valor;
    cin >> n;
    int quadrado[n][n];

    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> quadrado[i][j];
            if(quadrado[i][j] == 0){
                posicao1 = i + 1;
                posicao2 = j + 1;
            }
        } 
    }
    int linharef = (posicao1 - 1 == 0) ? 1 : 0;
    int ref = 0;
    for(int i = 0; i < n; i++){
        ref += quadrado[linharef][i];
    }
    valor = ref;
    for(int i = 0; i < n; i++){
        valor -= quadrado[posicao1 - 1][i];
    }
    cout << valor << "\n" << posicao1 << "\n" << posicao2;
    
}