#include <stdio.h>

int main()
{
    int a,b,t, res,t1,t2,t3,t4,t5,t6;
    scanf("%d",&a);
    scanf("%d",&b);
    t = b-a;
    t1=0;
    t2=0;
    t3=0;
    t4=0;
    t5=0;
    t6=0;

    while(t>=500){
        t -= 500;
        t1 += 1;
    }
    printf("%d\n",t1);
    while(t>=100){
        t -= 100;
        t2 += 1;
    }
    printf("%d\n",t2);
    while(t>=50){
        t -= 50;
        t3 += 1;
    }
    printf("%d\n",t3);
    while(t>=10){
        t -= 10;
        t4 += 1;
    }
    printf("%d\n",t4);
    while(t>=5){
        t -= 5;
        t5 += 1;
    }
    printf("%d\n",t5);
    while(t>=1){
        t -= 1;
        t6 += 1;
    }
    printf("%d\n",t6);
return 0;
}