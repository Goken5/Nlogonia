#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<vector<int>> toca;
vector<vector<bool>> visitado;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int dfs(int x, int y){
    if(toca[x][y] == 3) return 0;

    visitado[x][y] = true;
    
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && nx < n && ny >= 0 && ny < m && !visitado[nx][ny]){
            if(toca[nx][ny] == 1 || toca[nx][ny] == 3){
                int passos = dfs(nx, ny);
                if(passos != -1) return 1 + passos;
            }
        }
    }
    return -1;
}
int main(){
    cin >> n >> m;
    toca = vector<vector<int>>(n, vector<int>(m));
    visitado = vector<vector<bool>>(n, vector<bool>(m, false));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> toca[i][j];
        }
    }

    int startX, startY;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(toca[i][j] == 2){
                startX = i;
                startY = j;
            }
        }
    }
    int resposta = dfs(startX, startY);
    cout << resposta + 1;

}