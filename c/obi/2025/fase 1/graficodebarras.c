#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int brinquedos[100];
    int h = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &brinquedos[i]);
        if(h < brinquedos[i]){
            h = brinquedos[i];
        }
    }
    
    for(int i = 0; i < h; i++){
        for(int j = 0; j < n; j++){
            if(i < h - brinquedos[j]) printf("%d", 0);
            else printf("%d", 1);
            if(j < n - 1) printf(" ");
        }
        printf("\n");
    }
}