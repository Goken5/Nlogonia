#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int quadrado[1000][1000];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &quadrado[i][j]);
        }
    }

    int ref = 0;

    for(int i = 0; i < n; i++){
        ref += quadrado[i][0];
    }

    int soma = 0;

    for(int i = 0; i < n; i++){
        soma = 0;
        for(int j = 0; j < n; j++){
            soma += quadrado[i][j];
        }
        if(soma != ref) { printf("-1"); return 0; } 
    }

    for(int i = 0; i < n; i++){
        soma = 0;
        for(int j = 0; j < n; j++){
            soma+= quadrado[j][i];
        }
        if(soma != ref) { printf("-1"); return 0; }
    }

    soma = 0;
    for(int i = 0; i < n; i++){
        soma += quadrado[i][i];
    }
    if(soma != ref) { printf("-1"); return 0; }

    soma = 0;
    for(int i = 0; i < n; i++){
        soma += quadrado[i][n - i - 1];
    }
    if(soma != ref) { printf("-1"); return 0; }

    printf("%i", ref);

}