#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m, k;
vector<vector<bool>> vigiado, visitado;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void vigia(int l, int c, char direcao){
    vigiado[l][c] = true;

    if(direcao == 'N'){
        for(int i = l; i >= 0; i--){
            vigiado[i][c] = true;
        }
    }else if(direcao == 'S'){
        for(int i = l; i < m; i++){
            vigiado[i][c] = true;
        }
    }else if(direcao == 'O'){
        for(int j = c; j>= 0; j--){
            vigiado[l][j] = true;
        }
    }else if(direcao == 'L'){
        for(int j = c; j < n; j++){
            vigiado[l][j] = true;
        }
    }
}

bool bfs(){
    queue<pair<int, int>> fila;
    fila.push({0, 0});
    visitado[0][0] = true;

    while(!fila.empty()){
        auto x = fila.front().first;
        auto y = fila.front().second;
        fila.pop();

        if(x == m - 1 && y == n - 1){
            return true;
        }
        
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx >= 0 && nx < m && ny >= 0 && ny < n){
                if(!visitado[nx][ny] && !vigiado[nx][ny]){
                    visitado[nx][ny] = true;
                    fila.push({nx, ny});
                }
            }
        }
    }
    return false;
}
int main(){
    cin >> n >> m >> k;

    vigiado.assign(m, vector<bool>(n, false));
    visitado.assign(m, vector<bool>(n, false));

    for(int i = 0; i < k; i++){
        int c, l;
        char d;
        cin >> c >> l >> d;
        vigia(l - 1, c - 1, d);
    }
    if(vigiado[0][0] || vigiado[m - 1][n - 1]) {cout << "N"; return 0;}

    if(bfs()) cout << "S";
    else cout << "N";
}