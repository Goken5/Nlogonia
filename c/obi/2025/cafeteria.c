#include <stdlib.h>
#include <stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    int e = d;
    while(1 > 0){
        if(c - d >= a && c - d <= b){
            printf("S");
            return 0;
        }else if(c - d < a){
            printf("N");
            return 0;
        }
        d += e;
    }
    return 0;
}