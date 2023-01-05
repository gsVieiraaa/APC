#include <stdio.h>

int main()
{
    unsigned long long int n,a,b,c,d,e,f,g,h,i,j,k;
    int bd,cd,dd,ed,fd,gd,hd,id,jd,kd,dv,dv2;
    scanf("%99999999999lld",&n);
    a=n%10;
    b=n%100;
    c=n%1000;
    d=n%10000;
    e=n%100000;
    f=n%1000000;
    g=n%10000000;
    h=n%100000000;
    i=n%1000000000;
    j=n%10000000000;
    k=n%100000000000;
    bd=0;
    cd=0;
    dd=0;
    ed=0;
    fd=0;
    gd=0;
    hd=0;
    id=0;
    jd=0;
    kd=0;
    
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
    
    while(g>=1000000){
        g-=1000000;
        gd+=1;
    }
    
    while(h>=10000000){
        h-=10000000;
        hd+=1;
    }
    
    while(i>=100000000){
        i-=100000000;
        id+=1;
    }
    
    while(j>=1000000000){
        j-=1000000000;
        jd+=1;
    }
    while(k>=10000000000){
        k-=10000000000;
        kd+=1;
    }
    dv=(10*((kd*10)+(jd*9)+(id*8)+(hd*7)+(gd*6)+(fd*5)+(ed*4)+(dd*3)+(cd*2)))%11;
    dv2=(10*((kd*11)+(jd*10)+(id*9)+(hd*8)+(gd*7)+(fd*6)+(ed*5)+(dd*4)+(cd*3)+(bd*2)))%11;
    if (dv==10){
        dv=0;
    }
    if (dv==bd){
        if (dv2==a){
            printf("valido\n");
        }
        else
            printf("invalido\n");
    }
    else
        printf("invalido\n");
return 0;
}