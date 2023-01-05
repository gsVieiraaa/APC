#include <stdio.h>
int main(){
    int somap, somai, num;
    somap=0;
    somai=0;
    while (num!=0){
        scanf("%d", &num);
        if ((num%2) == 0){
           somap += num;
        }else{
            somai += num;
        }
    }
    printf("%d %d\n", somap, somai);
    return 0;
}