#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, a;
    cin >> n;
    vector<vector<int>> quadrado(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> quadrado[i][j];
        }
    }

    int ref = 0, soma = 0;
    for(int i = 0; i < n; i++){
        ref += quadrado[i][0];
    }

    for(int i = 0; i < n; i++){
        int soma = 0;
        for(int j = 0; j < n; j++){
            soma += quadrado[i][j];
        }
        if(soma != ref){
            cout << -1;
            return 0;
        }
    }

    for(int i = 0; i < n; i++){
        int soma = 0;
        for(int j = 0; j < n; j++){
            soma += quadrado[j][i];
        }
        if(soma != ref){
            cout << -1;
            return 0;
        }
    }
    soma = 0;
    for(int i = 0; i < n; i++){
        soma += quadrado[i][i];
    }
    if(soma != ref){
        cout << -1;
        return 0;
    }
    
    soma = 0;
    for(int i = 0; i < n; i++){
        soma += quadrado[i][n - i - 1];
    }
    if(soma != ref){
        cout << -1;
        return 0;
    }
    cout << ref;
}