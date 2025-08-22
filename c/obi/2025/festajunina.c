#include <stdlib.h>
#include <stdio.h>

int compara(const void *a, const void *b){
    return(*(int *)a - *(int *)b);
}
int main(){
    int array[3];
    for(int i = 0; i < 3; i++){
        scanf("%d", &array[i]);
    }
    
    qsort(array, 3, sizeof(int), compara);

    printf("%d", (array[2] - array[0]) * 2);

    return 0;
}