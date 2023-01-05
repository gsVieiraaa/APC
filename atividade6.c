#include <stdio.h>

int main()
{
    int a,b,c,d,x;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (b>=a){
        x=b;
    }
    else
        x=a;
    if (c>=a){
        x=c;
    } 
    if (d>=a){
        x=d;
    }
    printf("%d\n", x);
return 0;
}