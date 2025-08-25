#include <iostream>
#include <vector>
using namespace std;

int n, raiz;
vector<vector<int>> filhos;
bool bem = true;

int dfs(int u){
    vector<int> tamanhos;

    for(int filho : filhos[u]){
        int tam = dfs(filho);
        tamanhos.push_back(tam);
    }

    if(tamanhos.size() > 1){
        for(int i = 1; i < tamanhos.size(); i++){
            if(tamanhos[i] != tamanhos[0]) bem = false; return 0;
        }
    }
    

    int soma = 0;
    for(int tam : tamanhos) soma += tam;

    return soma + 1;
}
int main(){
    cin >> n;
    filhos.resize(n + 1);

    for(int i = 0; i < n; i++){
        int filho, pai;
        cin >> filho >> pai;
        if(pai == 0) raiz = filho;
        else filhos[pai].push_back(filho);
    }

    dfs(raiz);
    cout << (bem ? "bem" : "mal") << endl;

}