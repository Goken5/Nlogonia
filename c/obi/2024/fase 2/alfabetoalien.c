#include <stdio.h>
#include <string.h>

int main(){
    int k, n;
    scanf("%d %d", &k, &n);
    char alfabeto[k + 1];
    char mensagem[n + 1];
    scanf("%s", alfabeto);
    scanf("%s", mensagem);

    for(int i = 0; mensagem[i] != '\0'; i++){
        if(strchr(alfabeto, mensagem[i]) == NULL){
            printf("N");
            return 0;
        }
    }
    printf("S");
    return 0;
}