#include <stdio.h>
#include <stdlib.h>

// function for validating input
int controlvvoda ( int Case )
{
    float coef = 0;

    int number_was_inputed = 0;

        while ( 1 )
    {
        if ( Case == 1 ) printf ( "\nInput a coefficient\n" );

        else if ( Case == 2 ) printf ( "\nInput b coefficient\n" );

        else printf ( "\ninput c coefficient\n" );

        number_was_inputed = scanf ( "%f", &coef );

        if ( number_was_inputed == 0 )
           {
               fflush ( stdin );
               //Otherwise scanf does not work more than once

               continue;
           }

        else
               break;
    }
    return ( coef );
}

int main ()
{
    float a, b, c, cor, cor1, cor2, discr, otv1, otv2;

    a = controlvvoda (1);

    b = controlvvoda (2);

    c = controlvvoda (3);


    discr = b*b - 4*a*c;

    // Look to the discriminant was not less than zero
    if ( discr < 0 )
        printf( "There are not any answers" );

    else
    {
        otv1 = sqrt ( discr ) / ( 2*a );
        otv2 = -b / ( 2*a );

        if ( a == 0 )
        {
            cor = -c / b;

            printf( "\t%g", cor);
        }

        else
        {
            cor1 = otv1 + otv2;
            cor2 = otv1 - otv2;
    // check do not match if the roots
            if ( cor1 = cor2 )
                printf ( "\tAnswers are: %g", cor1);
            else
            printf ( "\tAnswers are: %g, %g", cor1, cor2 );
        }
    }

    return 0;
}
