#include <stdio.h>
#include <limits.h>
int main()
{
    int i, a, b, n, menor, x, menor2, menor3;
    menor = INT_MAX;
    menor2 = INT_MAX;
    menor3 = INT_MAX;
    n, x, a, b = 0;
    scanf("%d", &i);
    int vet[10000];
    while (n < i)
    {
        scanf("%d", &vet[n]);
        if (menor > vet[n])
        {
            menor = vet[n];
            x = n;
        }

        if (menor2 > vet[n] && vet[n] > menor)
        {
            menor2 = vet[n];
            a = n;
        }
        if (menor3 > vet[n] && vet[n] > menor2)
        {
            menor3 = vet[n];
            b = n;
        }

        n++;
    }
    printf("%d\n%d", vet[a], vet[b]);
    return 0;
}