#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> fila(n);
    for(int i = 0; i < n; i++) cin >> fila[i];
    int r;
    cin >> r;
    vector<int> retirados(r);
    for(int i = 0; i < r; i++) {
        cin >> retirados[i];
        auto a = find(fila.begin(), fila.end(), retirados[i]);
        fila.erase(a);
    }
    for(int i = 0; i < fila.size(); i++){
        cout << fila[i] << " ";
    }
}