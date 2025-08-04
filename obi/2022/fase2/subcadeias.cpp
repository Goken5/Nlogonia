#include <iostream>
#include <string>
using namespace std;

bool palindromo(string s, int l, int r){
    while(l < r){
        if(s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}
int main(){
    int n;
    string s;
    cin >> n >> s;
    
    int maior = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(palindromo(s, i, j)){
                int tamanho = j - i + 1;
                if(tamanho > maior) maior = tamanho;
            }
        }
    }
    cout << maior;
}