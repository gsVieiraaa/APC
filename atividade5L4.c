#include <stdio.h>
#include <limits.h>
int main()
{
    int i, n, num, x;
    n = 0;
    x = 0;
    scanf("%d", &i);
    int vet[10000];
    for (; n < i; n++)
    {
        scanf("%d", &vet[n]);
    }
    scanf("%d", &num);
    n=0;
    for (; n < i; n++)
    {
        if (num==vet[n])
        {
            x = 1;
        }
    }
    if (x == 1)
    {
        printf("pertence\n");
    }
    else
    {
        printf("nao pertence\n");
    }
    return 0;
}