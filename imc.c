
#include <cs50.h>
#include <stdio.h>

int main(void)
{

    float peso;
    do
    {
        peso = get_float("Informe seu peso (kg): ");
    }

    float altura;
    do
    {
        altura = get_float("Informe sua altura (m): ");
    }
    while (!(altura >= 1.40 && altura <= 2.50));

    float imc = peso / (altura * altura);

    printf("IMC: %.2f; ", imc);

    if (imc < 16.0)
    {

        printf("Classificação: Magreza grau III.\n");
    }

    else if (imc < 17.0)
    {

        printf("Classificação: Magreza grau II.\n");
    }

    else if (imc < 18.5)
    {

        printf("Classificação: Magreza grau I.\n");
    }

    else if (imc < 25.0)
    {

        printf("Classificação: Peso adequado.\n");
    }

    else if (imc < 30.0)
    {

        printf("Classificação: Pré-obeso.\n");
    }

    else if (imc < 35.0)
    {

        printf("Classificação: Obesidade grau I.\n");
    }

    else if (imc < 40.0)
    {

        printf("Classificação: Obesidade grau II.\n");
    }

    else if (imc >= 40.0)
    {

        printf("Classificação: Obesidade grau III.\n");
    }

    // Termina o programa:
    return 0;
}
