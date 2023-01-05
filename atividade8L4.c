#include <stdio.h>
#include <limits.h>
int main()
{
    int i, n = 0, soma = 0, m, x = 0;
    scanf("%d", &i);
    int vet[i], vet2[i];
    for (; n < i; n++)
    {
        scanf("%d", &vet[n]);
        soma += vet[n];
    }

    m = soma / i;
    n = 0;
    for (; n < i; n++)
    {
        if (vet[n] > m)
        {
            vet2[x] = vet[n];
            x++;
        }
    }
    n = 0;
    for (; n < x; n++)
    {
        printf("%d ", vet2[n]);
    }

    return 0;
}