double calculaVelocidadeMedia(int tA, int tB, double distancia)
{
    double vM;

    vM = distancia / (((double)tB - (double)tA) / 3600);
    return vM;
}
int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima)
{
    double vM;
    vM = calculaVelocidadeMedia(tA, tB, distancia);
    if (vM > velocidadeMaxima)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
/*int main()
{
    int tA = 61200;
    int tB = 63000;
    int r;
    double distancia = 60.0;
    double vM;
    double velocidadeMaxima = 120.0;
    vM = calculaVelocidadeMedia(tA, tB, distancia);
    r = levouMulta(tA, tB, distancia, velocidadeMaxima);
    printf("%lf\n", vM);
    printf("%d\n", r);

}*/
