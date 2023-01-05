#include <stdio.h>
int main(){
    int i,n;
    n=0;
    scanf("%d", &i);
    int vet[10000];
    while (n<i){
        scanf("%d", &vet[i]);
        n++;
    }
    printf("%d", vet[3]);
    return 0;
}