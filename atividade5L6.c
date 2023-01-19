#include <stdio.h>
int contarEstrelas(int qtd, int abertura)
{
    int fotons, estrelas = 0, visivel;
    for (; qtd > 0; qtd--)
    {
        scanf("%d", &fotons);
        visivel = (fotons * abertura);
        if (40000000 <= visivel)
        {
            estrelas++;
        }
    }
    return estrelas;
}
/*int main()
{
    int estrelas, qtd = 3, abertura = 5869;
    estrelas = contarEstrelas(qtd, abertura);
    printf("%d", estrelas);
}*/