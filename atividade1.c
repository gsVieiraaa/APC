#include <stdio.h>

int main()
{
    float p1, p2, p3, T, l1, l2, l3, l4, l5;
    scanf("%f%f%f", &p1, &p2, &p3);
    scanf("%f", &T);
    scanf("%f %f %f %f %f",&l1,&l2,&l3,&l4,&l5);
    float mp, mf, mt;
    mp = (p1+(2*p2)+(3*p3)+(2*T))/8;
    mf = (l1+l2+l3+l4+l5)/10;
    mt = mp+mf;
    printf("%.2f", mt);



    return 0;
}