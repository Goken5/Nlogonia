#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> grafo;
vector<bool> visitado;

void dfs(int u){
    visitado[u] = true;
    for(int c : grafo[u]){
        if(!visitado[c]) dfs(c);
    }

}
int main(){
    int s, t, p;
    cin >> s >> t >> p;
    vector<int> altura(s);
    grafo.resize(s);
    visitado.assign(s, false);

    for(int i = 0; i < s; i++){
        cin >> altura[i];
    }

    for(int i = 0; i < t; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        if(altura[a] > altura[b]){
            grafo[a].push_back(b);
        }else if(altura[b] > altura[a]){
            grafo[b].push_back(a);
        }
    }

    dfs(p - 1);

    int resposta = 0;
    for(int i = 0; i < s; i++){
        if(visitado[i] && i != p - 1){
            resposta++;
        }
    }
    cout << resposta;

}