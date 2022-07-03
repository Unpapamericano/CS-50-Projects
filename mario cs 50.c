#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int altura, anchura, columna, espacio;
    do
    {
        altura = get_int ("altura: ");
    }
    while (altura < 1 || altura > 8);

    for (anchura = 0; anchura < altura; anchura++)
    {
        for (espacio = 0; espacio < altura - anchura - 1; espacio++)
        {
            printf(" ");
        }
        for (columna = 0; columna <= anchura; columna++)

        {
            printf("#");
        }
        
        printf("\n");
    }
}
