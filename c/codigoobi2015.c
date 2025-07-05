#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    char codigo[n];
    int binario[n];

    for(int i = 0; i < n; i++){
        scanf(" %c", &codigo[i]);
    }
    int j = 0;
    for(int i = 0; i < n; i++){
        if(codigo[i] != ' '){
            binario[j] = codigo[i] - '0';
            j++;
        }
    }
    int contador = 0;
    for(int i = 0; i < j - 2; i++){
        if(binario[i] == 1 && binario[i + 1] == 0 && binario[i + 2] == 0){
            contador++;
        }
    }

    printf("%d", contador);

}