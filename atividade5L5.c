#include <stdio.h>
int main()
{
    char str[100], x = 'o';
    int i, soma = 0;
    while (scanf("%s", str) != EOF)
    {
        for (i = 0 ; str[i] != '\0'; i++)
        {
            if (str[i] == x)
            {
                soma++;
            }
        }
        i++;
    }
    printf("%d\n", soma);
    return 0;
}