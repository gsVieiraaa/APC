 #include <stdio.h>
 #include <limits.h>
int main(){
    int i,n, menor,x;
    menor=INT_MAX;
    n=0;
    x=0;
    scanf("%d", &i);
    int vet[10000];
    while (n<i){
        scanf("%d", &vet[n]);
        if (menor > vet[n]){
            menor = vet[n];
            x=n;
        }
        n++;
    }
    printf("%d", x);
    return 0;
}