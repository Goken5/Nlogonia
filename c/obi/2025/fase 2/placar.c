#include <stdio.h>
#include <stdlib.h>

int main(){
    int p;
    int c;
    scanf("%d", &p);
    int *placarP = malloc(p * sizeof(int));
    for(int i = 0; i < p; i++){
        scanf("%d", &placarP[i]);
    }
    scanf("%d", &c);
    int *placarC = malloc(c * sizeof(int));
    for(int i = 0; i < c; i++){
        scanf("%d", &placarC[i]);
    }
    int linhas = p + c;
    int golsP = 0, golsC = 0;
    printf("%d %d\n", 0, 0);
    if(p == 0 && c == 0) return 0;
    while(linhas > 0){
        if(golsP < p && golsC < c){
            if(placarP[golsP] < placarC[golsC]){
                golsP++;
            }else if(placarP[golsP] > placarC[golsC]){
                golsC++;
            }else{
                golsP++;
                golsC++;
            }
        }else if(golsP < p){
            golsP++;
        }else if(golsC < c){
            golsC++;
        }
    printf("%d %d\n", golsP, golsC);
    linhas--;
    }

    free(placarP);
    free(placarC);
}