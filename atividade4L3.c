#include <stdio.h>
int main(){
    int somap, somai, num;
    somap=0;
    somai=0;
    num=-1;
    while (num!=0){
        scanf("%d", &num);
        if ((num%2) == 0){
           somap += num;
        }else{
            somai += num;
        }
    }
    printf("%d\n", somap);
    return 0;
}