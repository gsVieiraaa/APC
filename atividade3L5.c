#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int i = 0, n = 0, a;
    scanf("%d", &a);
    for (; a > 0; a--)
    {
        scanf("%s", str);
        while (i < 1000 && str[i] != '\0')
        {
            i++;
        }
        if (i > n)
        {
            n = i;
        }
    }
    printf("%d\n", n);
    return 0;
}for (;i < 1000;i++ && str[i] != '\0')