#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;

int v, n, m;
struct rota{
    int destino, tempo, custo;
};

int main(){
    cin >> v >> n >> m;
    vector<vector<rota>> grafo(n + 1);

    for(int i = 0; i < m; i++){
        int a, b, t, p;
        cin >> a >> b >> t >> p;
        grafo[a].push_back({b, t, p});
        grafo[b].push_back({a, t, p});
    }
    int x, y;
    cin >> x >> y;

    vector<vector<int>> dist(n + 1, vector<int>(v + 1, 1e9));
    dist[x][0] = 0;
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> fila;
    fila.push({0, x, 0});

    while(!fila.empty()){
        auto [tempoAtual, ilhaAtual, custoAtual] = fila.top();
        fila.pop();
        if(dist[ilhaAtual][custoAtual] < tempoAtual) continue;

        for(auto rota : grafo[ilhaAtual]){
            int proximaIlha = rota.destino;
            int novoTempo = tempoAtual + rota.tempo;
            int novoCusto = custoAtual + rota.custo;

            if(novoCusto <= v && dist[proximaIlha][novoCusto] > novoTempo){
                dist[proximaIlha][novoCusto] = novoTempo;
                fila.push({novoTempo, proximaIlha, novoCusto});
            }
        }
    }
    int resposta = 1e9;
    for(int i = 0; i <= v; i++){
        resposta = min(resposta, dist[y][i]);
    }
    if(resposta == 1e9) cout << -1;
    else cout << resposta;

}