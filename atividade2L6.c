#include <stdio.h>
int validaPeso(double pesoKg)
{
    if (pesoKg <= 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void fazTonelada(double pesoKg)
{
    pesoKg = pesoKg / 1000;
    return printf("%.4lf\n", pesoKg);
}
void fazGrama(double pesoKg)
{
    pesoKg = pesoKg * 1000;
    return printf("%.4lf\n", pesoKg);
}