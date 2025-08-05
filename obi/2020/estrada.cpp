#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
    int t, n;
    cin >> t >> n;
    vector<int> distancia(n);

    for(int i = 0; i < n; i++) cin >> distancia[i];
    sort(distancia.begin(), distancia.end());
    vector<double> vizinhancas;

    vizinhancas.push_back((distancia[0] - 0) + (distancia[1] - distancia[0]) / 2.0);

    for(int i = 1; i < n - 1; i++){
        double esquerda = ((distancia[i] - distancia[i - 1]) / 2.0);
        double direita = ((distancia[i + 1] - distancia[i]) / 2.0);
        vizinhancas.push_back(esquerda + direita);
    }
    vizinhancas.push_back((t - distancia[n - 1]) + (distancia[n - 1] - distancia[n - 2]) / 2.0);

    double menor = *min_element(vizinhancas.begin(), vizinhancas.end());
    cout << fixed << setprecision(2) << menor;

}