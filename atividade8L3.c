int main()
{
    int i, x;
    i = 0;
    scanf("%d", &i);
    x = i;
    int vet[i];
    char resp[i];
    while (i > 0)
    {
        i--;
        scanf("%d", &vet[i]);
        if (vet[i] == 2 || vet[i] == 3 || vet[i] == 5 || vet[i] == 7)
        {
            resp[i] = 'S';
        }
        else if (vet[i] == 1 || (vet[i] % 2) == 0 || (vet[i] % 3) == 0 || (vet[i] % 5) == 0 || (vet[i] % 7) == 0)
        {
            resp[i] = 'N';
        }
        else
        {
            resp[i] = 'S';
        }
    }
    i = x;
    while (x > 0)
    {
        i--;
        x--;
        printf("%c\n", resp[i]);
    }
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////#include <stdio.h>
int arrojado(int);
int primo(int);
int main()
{
    int T, n, arroj;

    scanf("%d", &T);
    for(int i=1; i<=T;i++)
    {
        scanf("%d", &n);
        arroj = arrojado(n);
        if(arroj==0)
        printf("N\n");
        else
            printf("S\n");

    }
    return 0;
}
int arrojado(int n)
{
    int p=1, ehprimo;
    while(p==1)
    {
        ehprimo = primo(n);
        if(ehprimo==1)
            p=1;
        if (ehprimo==0)
            p=0;

        n = n/10;
        if(n==0)
            break;
    }
    return p;
}
int primo(int n)
{
    int d=2, ehprimo=1;
    if(n<=1)
        ehprimo=0;
    while(ehprimo==1 && d<=n/2)
    {
        if(n%d==0)
          ehprimo=0;
        d=d+1;
    }
    if(ehprimo==1)
        ehprimo=1;
    else
        ehprimo=0;

    return ehprimo;
}
