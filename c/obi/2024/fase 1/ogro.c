#include <stdio.h>
#include <stdlib.h>

int main(){
    int e, d, resultado;
    scanf("%d %d", &e, &d);
    if(e > d) resultado = e + d;
    else resultado = (d - e) * 2;
    printf("%d", resultado);
}