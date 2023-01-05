#include <stdio.h>

int main()
{
    int n,a,b,c,d,e,f,bd,cd,dd,ed,fd,dv;
    scanf("%d",&n);
    a=n%10;
    b=n%100;
    c=n%1000;
    d=n%10000;
    e=n%100000;
    f=n%1000000;
    bd=0;
    cd=0;
    dd=0;
    ed=0;
    fd=0;
    while(b>=10){
        b-=10;
        bd+=1;
    }
    while(c>=100){
        c-=100;
        cd+=1;
    }
    while(d>=1000){
        d-=1000;
        dd+=1;
    }
    while(e>=10000){
        e-=10000;
        ed+=1;
    }
    while(f>=100000){
        f-=100000;
        fd+=1;
    }
    dv=11-(((a*2)+(bd*3)+(cd*4)+(dd*5)+(ed*6)+(fd*7))%11);
    printf("%d\n",dv);
return 0;
}