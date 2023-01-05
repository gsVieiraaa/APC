#include <stdio.h>

int main()
{
    double m, n2, n1;
    int x, y;
    scanf("%lf", &m);
    scanf("%lf", &n2);
    scanf("%d %d", &x, &y);
    n1 = ((m*(x+y))-(n2*y))/x;
    printf("%lf\n", n1);
return 0;
}