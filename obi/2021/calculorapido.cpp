#include <iostream>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    int contador = 0;
    for(int i = a; i <= b; i++){
        string x = to_string(i);
        int soma = 0;

        for(char c : x){
            soma += c - '0';
        }
        if(soma == n){
            contador++;
        }
    }
    cout << contador;

}