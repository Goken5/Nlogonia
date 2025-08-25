#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> lista(n);
    for(int i = 0; i < n; i++) cin >> lista[i];

    int i = 0, j = n - 1, contador = 0;
    while(i < j){
        if(lista[i] == lista[j]){
            i++;
            j--;
        }else if(lista[i] < lista[j]){
            lista[i + 1] += lista[i];
            i++;
            contador++;
        }else if(lista[i] > lista[j]){
            lista[j - 1] += lista[j];
            j--;
            contador++;
        }
    }
    cout << contador;
}       