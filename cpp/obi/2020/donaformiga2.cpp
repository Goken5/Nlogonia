#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> grafo;
vector<int> altura, dp;

int dfs(int u){
    if(dp[u] != -1) return dp[u];

    int maior = 0;
    for(int c : grafo[u]){
        maior = max(maior, 1 + dfs(c));
    }
    dp[u] = maior;
    return dp[u];
}
int main(){
    int s, t, p;
    cin >> s >> t >> p;
    grafo.resize(s);
    altura.resize(s);
    dp.assign(s, -1);

    for(int i = 0; i < s; i++){
        cin >> altura[i];
    }

    for(int i = 0; i < t; i++){
        int a, b;
        cin >> a >> b;
        a--;
        b--;

        if(altura[a] > altura[b]){
            grafo[a].push_back(b);
        }
        if(altura[b] > altura[a]){
            grafo[b].push_back(a);
        }
    }

    cout << dfs(p - 1);
}