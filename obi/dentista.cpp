#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<pair<int, int>> consultas;
    int n, contador = 1;
    cin >> n;
    
    for(int i = 0; i < n; i++) 
    {
        int first, second;
        cin >> first >> second;
        consultas.push_back({first, second});
    }
    
    sort(consultas.begin(), consultas.end(), [](pair<int, int> a, pair<int, int> b){
        return a.second < b.second;
    });
    
    int final = consultas[0].second;
    
    for(int i = 0; i < n; i++){
        if(consultas[i].first >= final){
            final = consultas[i].second;
            contador++;
        }
    }
    cout << contador;
}