#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int l1 = 0, l2 = 0, l3 = 0, l4 = 0;
    if(n >= 2){
        l1 = (n - 2) * (n - 2) * (n - 2);
        l2 = 6 * (n - 2) * (n - 2);
        l3 = 12 * (n - 2);
        l4 = 8;
    }
    printf("%d\n%d\n%d\n%d\n", l1, l2, l3, l4);
}