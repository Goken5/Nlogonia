#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    char alfabeto[n1], mensagem[n2];

    for(int i = 0; i < n1; i++) cin >> alfabeto[i];
    for(int i = 0; i < n2; i++) cin >> mensagem[i];

    for(int i = 0; i < n2; i++){
        if(find(alfabeto, alfabeto + n1, mensagem[i]) == alfabeto + n1){
            cout << "N";
            return 0;
        }
    }
    cout << "S";
}