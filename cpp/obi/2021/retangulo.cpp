#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, total = 0;
    cin >> n;
    vector<int> arvores;

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        arvores.push_back(a);
        total += a;
    }

    if(total % 4 != 0){
        cout << "N";
        return 0;
    }
    int alvo = total / 4;
    int soma = 0;
    vector<int> resultados;
    resultados.push_back(0);
    for(int i = 0; i < n*2; i++){
        soma += arvores[i % n];
        resultados.push_back(soma % total);
    }
    
    for(int i = 0; i + 3 < (int)resultados.size(); i++){
        if(resultados[i] == 0 && resultados[i + 1] == alvo && resultados[i + 2] == 2 * alvo && resultados[i + 3] == 3 * alvo) cout << "S"; return 0;
    }
    cout << "N";
}