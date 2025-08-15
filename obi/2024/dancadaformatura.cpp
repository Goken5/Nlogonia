#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
    int n, m, p;
    cin >> n >> m >> p;

    int contador = 1;
    vector<long long> linhas(n);
    vector<long long> colunas(m);
    iota(linhas.begin(), linhas.end(), 0);
    iota(colunas.begin(), colunas.end(), 0);
    
    char ordens;
    int a, b;
    for(int x = 0; x < p; x++){
        cin >> ordens >> a >> b;
        a--; b--;
        if(ordens == 'C'){
            swap(colunas[a], colunas[b]);
        }else if(ordens == 'L'){
            swap(linhas[a], linhas[b]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << (long long)linhas[i] * m + colunas[j] + 1 << ' ';
        }
        cout << endl;
    }

}
