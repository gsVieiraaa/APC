#include <stdio.h>
int main()
{
    int i, n = 0, x = 0, y = 0;
    scanf("%d", &i);
    int par[i], impar[i],vet[i];
    for (; n < i; n++)
    {
        scanf("%d", &vet[n]);
        if (vet[n] % 2 == 0)
        {
            par[x] = n;
            x++;

        }
        else
        {
            impar[y] = n;
            y++;
        }
    }
    for (i = 0; i < x; i++)
    {
        printf("%d ", par[i]);
    }

    printf("\n");
    for (i = 0; i < y; i++)
    {
        printf("%d ", impar[i]);
    }

    return 0;
}