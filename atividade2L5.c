#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int i = 0;
    scanf("%s", str);
    while (i < 1000 && str[i] != '\0')
    {
        i++;
    }
    i--;
    for (; -1 < i; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}