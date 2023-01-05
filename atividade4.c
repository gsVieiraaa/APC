#include <stdio.h>

int main()
{
    unsigned long int h,m,s;
    scanf("%lu", &h);
    m=h*60;
    s=h*3600;
    printf("%lu\n",m);
    printf("%lu\n",s);
return 0;
}