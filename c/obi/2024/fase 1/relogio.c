#include <stdio.h>
#include <stdlib.h>

int main(){
    int h, m, s, t;
    scanf("%d%d%d%d", &h, &m, &s, &t);
    int total = h * 3600 + m * 60 + s + t;

    h = (total / 3600) % 24;
    m = (total % 3600) / 60;
    s = total % 60;

    printf("%d\n%d\n%d\n", h, m, s);
}