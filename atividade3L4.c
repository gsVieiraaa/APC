#include <stdio.h>
int main()
{
    int i, n = 0, num, x = 0, y = 0;
    scanf("%d", &i);
    int par[i], impar[i];
    for (; n < i; n++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            par[x] = num;
            x++;
        }
        else
        {
            impar[y] = num;
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