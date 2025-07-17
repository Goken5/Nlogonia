#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int pontos[5];
    for(int i = 0; i < 5; i++) cin >> pontos[i];
    int trofeus = 0, placas = 0;

    int maior = pontos[0];
    int segundo;
    for(int i = 0; i < 5; i++){
        if(pontos[i] != maior){
            segundo = pontos[i];
            break;
        }
    }
    for(int i = 0; i < 5; i++){
        if(pontos[i] == maior){
            trofeus++;
        }else if(pontos[i] == segundo){
            placas++;
        }
    }
    
    cout << trofeus << ' ' << placas;
}