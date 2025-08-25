#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    int x = *(int*)a;
    int y = *(int*)b;
    return y - x;
}
int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int candidatos[n];
    for(int i = 0; i < n; i++) scanf("%d", &candidatos[i]);
    qsort(candidatos, n, sizeof(int), cmp);

    printf("%d", candidatos[k - 1]);
}