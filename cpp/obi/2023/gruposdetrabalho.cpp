#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    int e, m, d;
    cin >> e >> m >> d;
    vector<pair<int, int>> amigos(m);
    vector<pair<int, int>> inimigos(d);

    for(int i = 0; i < m; i++) cin >> amigos[i].first >> amigos[i].second;
    for(int i = 0; i < d; i++) cin >> inimigos[i].first >> inimigos[i].second;

    unordered_map<int, int> grupo;
    int totalDeGrupos = e/3;
    
    for(int i = 0; i < totalDeGrupos; i++){
        int a, b, c;
        cin >> a >> b >> c;
        grupo[a] = i;
        grupo[b] = i;
        grupo[c] = i;
    }
    int violacoes = 0;

    for(auto par : amigos){
        int x = par.first;
        int y = par.second;
        if(grupo[x] != grupo[y]) violacoes++;
    }
    for(auto par : inimigos){
        int u = par.first;
        int v = par.second;
        if(grupo[u] == grupo[v]) violacoes++;
    }
    cout << violacoes;
}