#include <stdio.h>
 
int main() {
    
    int cem, cinquenta, vinte, dez, cinco, dois;
    double value;
    scanf("%f", &value);
    
    printf("NOTAS: \n");
    cem = value / 100;
    value -= cem * 100;
    printf("%i nota(s) de R$ 100.00\n", cem);

    cinquenta = value / 50;
    value -= cinquenta * 50;
    printf("%i nota(s) de R$ 50.00\n", cinquenta);

    vinte = value / 20;
    value -= vinte * 20;
    printf("%i nota(s) de R$ 20.00\n", vinte);

    dez = value / 10;
    value -= dez * 10;
    printf("%i nota(s) de R$ 10.00\n", dez);

    cinco = value / 5;
    value -= cinco * 5;
    printf("%i nota(s) de R$ 5.00\n", cinco);

    dois = value / 2;
    value -= dois * 2;
    printf("%i nota(s) de R$ 2.00\n", dois);
    

    printf("MOEDAS: \n");
    int um, m50, m25, m10, m5, m1;

    um = value / 1;
    value -= um * 1;
    printf("%i moeda(s) de R$ 1.00\n", um);

    m50 = value / 0.5;
    value -= m50 * 0.5;
    printf("%i moeda(s) de R$ 0.50\n", m50);

    m25 = value / 0.25;
    value -= m25 * 0.25;
    printf("%i moeda(s) de R$ 0.25\n", m25);

    m10 = value / 0.1;
    value -= m10 * 0.1;
    printf("%i moeda(s) de R$ 0.10\n", m10);

    m5 = value / 0.05;
    value -= m5 * 0.05;
    printf("%i moeda(s) de R$ 0.05\n", m5);

    m1 = value / 0.01;
    value -= m1 * 0.01;
    printf("%i moeda(s) de R$ 0.01\n", m1);
    
    return 0;
}
