#include <stdio.h>
#include <limits.h>
int main()
{
    int i, n, num, x;
    n = 0;
    x = 0;
    scanf("%d", &i);
    int vet[i], vet2[i];
    for (; n < i; n++)
    {
        scanf("%d", &vet[n]);
    }
    n = 0;
    for (; n < i; n++)
    {
        scanf("%d", &vet2[n]);
    }
    n = 0;
    for (; n < i; n++)
    {
        if (vet[n] == vet2[n])
        {
            x++;
        }
    }
    if (x == i)
    {
        printf("sim\n");
    }
    else
    {
        printf("nao\n");
    }
    return 0;
}