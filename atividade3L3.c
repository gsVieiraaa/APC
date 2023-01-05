int main(){
    int i, soma, num;
    soma=0;
    scanf("%d", &i);
    while (i>0){
        i--;
        scanf("%d", &num);
        soma += num;
    }
    printf("%d\n", soma);
    return 0;
}