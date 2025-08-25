#include <stdlib.h>
#include <stdio.h>

int main(){
    int n, q;
    scanf("%d %d", &n, &q);
    int matriz[n][n];
    int proxima[n][n];
    char linha[n+1];
    for(int i = 0; i < n; i++){
        scanf("%s", linha);
        for(int j = 0; j < n; j++){
            matriz[i][j] = linha[j] - '0';
        }
    }
    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    for(int a = 0; a < q; a++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int vivos = 0;
                for(int k = 0; k < 8; k++){
                    int di = i + dx[k];
                    int dj = j + dy[k];
                    if(di >= 0 && di < n && dj >= 0 && dj < n){
                        vivos += matriz[di][dj];
                    }
                }
                if(matriz[i][j] == 1){
                    if(vivos < 2 || vivos > 3) proxima[i][j] = 0;
                    else proxima[i][j] = 1;
                }else {
                    if(vivos == 3) proxima[i][j] = 1;
                    else proxima[i][j] = 0;
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                matriz[i][j] = proxima[i][j];
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
}