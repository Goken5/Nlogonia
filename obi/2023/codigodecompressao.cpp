#include <iostream>
using namespace std;

int main(){
    int n, c;
    cin >> n;
    string cadeia;
    cin >> cadeia;
    int contador = 1;
    for(int i = 1; i < n; i++){
        if(cadeia[i] == cadeia[i - 1]){
            contador++;
        }else{
            cout << contador << " " << cadeia[i - 1] << " ";
            contador = 1;
        }
    }
    cout << contador << " " << cadeia[n - 1];

}