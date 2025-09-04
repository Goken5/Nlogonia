#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int calorias = 0;

    for(int i = 0; i < n; i++){
        int p, g, c;
        cin >> p >> g >> c;
        calorias += p * 4;
        calorias += g * 9;
        calorias += c * 4;
    }
    cout << m - calorias;
}