#include <stdio.h>
#include <stdlib.h>

void swap(long long *x, long long *y){
    long long temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int n, m, p;
    scanf("%d %d %d", &n, &m, &p);

    long long linhas[n];
    long long colunas[m];
    for(int i = 0; i < n; i++) linhas[i] = i;
    for(int j = 0; j < m; j++) colunas[j] = j;

    char ordens;
    int a, b;
    for(int i = 0; i < p; i++){
        scanf(" %c %d %d", &ordens, &a, &b);
        a--; b--;
        if(ordens == 'C'){
            swap(&colunas[a], &colunas[b]);
        }else if(ordens == 'L'){
            swap(&linhas[a], &linhas[b]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%lld ", linhas[i] * m + colunas[j] + 1);
        }
        printf("\n");
    }
}