
#include <cs50.h>
#include <stdio.h>


int main(void)
{
    // Solicita o valor da comida:
    float comida;
    do
    {
        comida = get_float("Valor da comida: ");
    }
    while (comida < 10.00 || comida > 999.99);

    // Solicita o percentual de impostos:
    float impostos;
    do
    {
        impostos = get_float("Porcentagem de impostos: ");
    }
    while (impostos < 0.00 || impostos > 100.00);

    // Solicita o percentual de gorjeta:
    int gorjeta;
    do
    {
        gorjeta = get_int("Porcentagem da gorjeta: ");
    }
    while (gorjeta < 0 || gorjeta > 100);

    // cálculo do valor da conta.

    float porc_imp = comida * impostos / 100;
    float comida_com_imp = (comida + porc_imp);
    float porc_gorj = comida_com_imp + (comida_com_imp * gorjeta / 100);
    float resultado = porc_gorj / 2;

    printf("Cada um pagará R$ %.2f!\n", resultado);

    // Termina o programa:
    return 0;
}
