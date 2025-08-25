#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, d;
    long long w;
    if (scanf("%d %d %lld", &n, &d, &w) != 3) return 0;

    if (d > n) {
        printf("0\n");
        return 0;
    }

    int *preco = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &preco[i]);

    long long *soma = malloc((n + 1) * sizeof(long long));
    soma[0] = 0;
    for (int i = 0; i < n; i++) soma[i+1] = soma[i] + preco[i];

    int nSomas = n - d + 1;
    long long *somaD = malloc(nSomas * sizeof(long long));
    for (int i = 0; i < nSomas; i++) somaD[i] = soma[i + d] - soma[i];

    int minimo = d, maximo = n, melhor = d;

    int *deque = malloc(nSomas * sizeof(int));

    while (minimo <= maximo) {
        int meio = (minimo + maximo) / 2;
        int tamanhoJanela = meio - d + 1;
        int achou = 0;

        int head = 0, tail = 0;

        for (int i = 0; i < tamanhoJanela; i++) {
            while (tail > head && somaD[deque[tail-1]] <= somaD[i]) tail--;
            deque[tail++] = i;
        }

        for (int L = 0; L <= n - meio; L++) {
            int R = L + meio - 1;

            while (tail > head && deque[head] < L) head++;

            if (head < tail) {
                long long melhorD = somaD[deque[head]];
                long long somaIntervalo = soma[R+1] - soma[L];
                long long custoPago = somaIntervalo - melhorD;
                if (custoPago <= w) { achou = 1; break; }
            }

            int novoIdx = L + tamanhoJanela;
            if (novoIdx < nSomas) {
                while (tail > head && somaD[deque[tail-1]] <= somaD[novoIdx]) tail--;
                deque[tail++] = novoIdx;
            }
        }

        if (achou) { melhor = meio; minimo = meio + 1; }
        else maximo = meio - 1;
    }

    printf("%d\n", melhor);

    free(preco);
    free(soma);
    free(somaD);
    free(deque);

    return 0;
}
