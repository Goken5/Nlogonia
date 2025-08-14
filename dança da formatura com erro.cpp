#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m, p;
    cin >> n >> m >> p;

    int contador = 1;
    vector<vector<long long>> matriz(n, vector<long long>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            matriz[i][j] = contador;
            contador++;
        }
    }
    char ordens;
    int a, b;
    for(int x = 0; x < p; x++){
        cin >> ordens >> a >> b;
        if(ordens == 'C'){
            for(int i = 0; i < n; i++){
                swap(matriz[i][a], matriz[i][b]);
            }
        }else if(ordens == 'L'){
            for(int j = 0; j < m; j++){
                swap(matriz[a][j], matriz[b][j]);
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

}
