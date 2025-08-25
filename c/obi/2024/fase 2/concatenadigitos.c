#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, q;
    scanf("%d %d", &n, &q);
    int digitos[n + 1];
    long long prefix[n + 1];

    for(int i = 1; i <= n; i++){
        scanf("%d", &digitos[i]);
        prefix[i] = prefix[i - 1] + digitos[i];
    }

    while(q--){
        int l, r;
        scanf("%d %d", &l, &r);
        long long sum = prefix[r] - prefix[l - 1];
        int len = r - l + 1;
        long long potencial = 11ll * sum * (len - 1);
        printf("%lld\n", potencial);
    }
}