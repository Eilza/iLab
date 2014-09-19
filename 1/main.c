#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float A = 0.0, B =0.0, C =0.0, cor, cor1, cor2, discr, otv1, otv2;

    // Проверим корректность ввода коэффициентов
    int a_was_inputed = 0;

    while ( 1 )
    {
        printf ( "\nInput A coefficient\n" );

        fflush ( stdin );
        // Иначе не работает scanf больше одного раза.

        a_was_inputed = scanf ( "%f", &A );

        if ( a_was_inputed == 0 )
            continue;

        else
            break;
    }

    int b_was_inputed = 0;

    while ( 1 )
    {
        printf ( "\nInput B coefficient\n" );

        fflush ( stdin );
        // Иначе не работает scanf больше одного раза.

        b_was_inputed = scanf ( "%f", &B );

        if ( b_was_inputed == 0 )
            continue;

        else
            break;
    }

    int c_was_inputed = 0;

    while ( 1 )
    {
        printf ( "\nInput C coefficient\n" );

        fflush ( stdin );
        // Иначе не работает scanf больше одного раза.

        c_was_inputed = scanf ( "%f", &C );

        if ( c_was_inputed == 0 )
            continue;

        else
            break;
    }
    discr = B*B - 4*A*C;

    // Смотрим, чтоб дискриминант не был меньше нуля
    if ( discr < 0 )
        printf( "There are not any answers" );

    else
    {
        otv1 = sqrt ( discr ) / ( 2*A );
        otv2 = -B / ( 2*A );

        if ( A == 0 )
        {
            cor = -B / C;

            printf( "\t%g", cor);
        }

        else
        {
            cor1 = otv1 + otv2;
            cor2 = otv1 - otv2;
    // Проверяем, не совпадают ли корни
            if ( cor1 = cor2 )
                printf ( "\tAnswers are: %g", cor1);
            else
            printf ( "\tAnswers are: %g, %g", cor1, cor2 );
        }
    }

    return 0;
}
