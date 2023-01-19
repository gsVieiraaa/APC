#include <stdio.h>
int faz_conta_direito(int parcelas, char op)
{
    int n, c, p;
    scanf("%d", &n);
    parcelas--;
    for (p = parcelas; p > 0; p--)
    {
        scanf("%d", &c);
        if (op == '-')
        {
            n -= c;
        }
        else
        {
            n += c;
        }
    }
    return n;
}
//int main()
//{
//    int parcelas = 4, n, p;
//   char op = '+';
//   n = faz_conta_direito(parcelas, op);
//
//   printf("%d\n", n);
//}