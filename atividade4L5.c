#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
int main()
{
    int i=0,n;
    char str[100],x=' ',nome[100],snome[100];
    scanf("%[^\n]s",str);
    while(i<100 && str[i]!='\0'){
        i++;
    }
    if (str[i]==x){
        for (n=0;n<i;n++)
        nome[n]=tolower(str[n]);
    }
     
    
    
    printf("%s.%s@unb.br", nome,snome);
 return 0;   
}