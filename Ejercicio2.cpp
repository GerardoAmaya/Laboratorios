//Programa que lea la hora, hh, mm y ss, en el modo de 24 horas
//Luego calcule y despliegue cuál es la hora un segundo después.

#include <conio.h>
#include <stdio.h>

int main()
{
    int hora, minuto, segundo;

    printf( "\n   Introduzca hora: " );
    scanf( "%d", &hora );
    printf( "\n   Introduzca los minutos: " );
    scanf( "%d", &minuto );
    printf( "\n   Introduzca los segundos: " );
    scanf( "%d", &segundo );

    if ( hora >= 0 && hora <= 23 && minuto >= 0 && minuto <= 59 && segundo >= 0 && segundo <= 59 )
    {
        segundo++;
        if ( segundo == 60 )
        {
            segundo = 0;
            minuto++;
            if ( minuto == 60 )
            {
                minuto = 0;
                hora++;
                if ( hora == 24 )
                    hora = 0;
            }
        }
        printf( "\n   Un segundo despues la hora es: %d:%d:%d", hora, minuto,segundo );
    }
    else
        printf( "\n La hora es incorrecta." );

    getch();

    return 0;
}