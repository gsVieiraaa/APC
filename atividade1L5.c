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
    printf("%d\n", i);
    return 0;
}