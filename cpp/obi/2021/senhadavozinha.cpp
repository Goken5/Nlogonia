#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, m, k, p;
    cin >> n >> m >> k;
    string senha;
    cin >> senha;

    vector<string>listas(m);
    for(int i = 0; i < m; i++) {cin >> listas[i]; sort(listas[i].begin(), listas[i].end()); } 
    cin >> p;

    vector<int> borrado;
    for(int i = 0; i < n; i++){
        if(senha[i] == '#'){
            borrado.push_back(i);
        }
    }
    p--;
    for(int i = 0; i < m; i++){
        int idx = p % k;
        senha[borrado[m - 1 - i]] = listas[m - 1 - i][idx];
        p /= k;
    }
    cout << senha;
}