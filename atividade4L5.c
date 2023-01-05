#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000],nome[1000],snome[1000];
    int i = 0, n = 0, a;
    scanf("%d", &a);
    for (; a > 0; a--)
    {
        scanf("%s", str);
        while (i < 1000 && str[i] != '\0')
        {
            i++;
        }
        while (str[i]=!" ")
        {
            nome=str
        }
    }
    printf("%s.%s@unb.br", str,nome);
    return 0;
}