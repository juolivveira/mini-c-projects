#include <cs50.h>
#include <stdio.h>

// Esse código foi feito para construir uma pirâmide a partir do valor adquirido para sua altura,
// sendo esse valor entre 1 e 8. Essa é uma pirâmide alinhada à direita.
int main(void)
{

    int altura;
    // Enquanto o valor não for entre 1 e 8, o programa irá solicitar novamente a altura até que um
    // número válido seja informado.
    do
    {
        altura = get_int("Altura: ");
    }
    while (!(altura < 9 && altura > 0));

    // Esse é um loop para a quantidade de linhas. Assim, a cada linha o loop imprime uma quebra de
    // linha.
    for (int linha = 1; linha <= altura; linha++)
    {
        // Esse é um dos loops para os espaços. Para cada linha, a quantidade (altura - 1) de
        // espaços (" ") é impressa.
        for (int espaco = altura; espaco >= (linha + 1); espaco--)
        {
            printf(" ");
        }
        // Esse é um dos loops para as cerquilhas. Para cada linha, a quantidade da linha atual para
        // ("#") é impressa.
        for (int cerquilha = 1; cerquilha <= linha; cerquilha++)
        {
            printf("#");
        }

        printf("\n");
    }
    return 0;
}
