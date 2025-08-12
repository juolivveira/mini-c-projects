#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int nmr_tab;

    do
    {
        nmr_tab = get_int("Você quer a tabuada de qual número? ");
    }
    while (!(nmr_tab < 100 && nmr_tab > 0));

    for (int t = 0; t <= 10; t++)
    {

        int resultado = nmr_tab * t;

        printf("%d x %d = %d\n", nmr_tab, t, resultado);
    }
}
