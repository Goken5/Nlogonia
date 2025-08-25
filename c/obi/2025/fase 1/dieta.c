#include <stdlib.h>
#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int total = 0;
    for(int i = 0; i < n; i++){
        int p, g, c;
        scanf("%d %d %d", &p, &g, &c);
        total += p * 4; total += g * 9; total += c * 4;
    }
    printf("%d",(total < m) ? m - total : 0);
    return 0;
}