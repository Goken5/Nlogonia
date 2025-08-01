#include <iostream>
#include <vector>
using namespace std;

int l, c;
vector<vector<char>> mapa;
vector<vector<bool>> visitado;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y, int &coluna_final, int &linha_final){
    visitado[x][y] = true;
    linha_final = x + 1;
    coluna_final = y + 1;

    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && nx < l && ny >= 0 && ny < c && !visitado[nx][ny]){
            if(mapa[nx][ny] == 'H'){
                dfs(nx, ny, coluna_final, linha_final);
                break;
            }
        }
    }
}
int main(){    
    cin >> l >> c;
    mapa = vector<vector<char>> (l, vector<char>(c));
    visitado = vector<vector<bool>> (l, vector<bool>(c, false));

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cin >> mapa[i][j];
        }
    }
    int linhaInicio, colunaInicio;
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(mapa[i][j] == 'o'){
                linhaInicio = i;
                colunaInicio = j;
            }
        }
    }
    int linha_final, coluna_final;
    dfs(linhaInicio, colunaInicio, coluna_final, linha_final);
    cout << linha_final << " " << coluna_final;
}