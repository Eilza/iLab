#include "functions.h"

int inputcontrol ( int Case )
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
               //otherwise scanf does not work more than once

               continue;
           }

        else
               break;
    }
    return ( coef );
}

int calculating ( float a, float b, float c )
{
    float cor, discr, ans1, ans2 = 0;

    discr = b*b - 4*a*c;

    // the case without answers
    if ( ( discr < 0 ) || ( ( a == 0 ) && ( b == 0 ) && ( c != 0 ) ) )
        printf( "There are not any answers" );

    else
    {
        // consider the case where all coefficients equal to 0
        if ( ( a == 0 ) && ( b == 0 ) && ( c == 0 ) )
          printf( "There are infinitely many answers" );
        else


        ans1 = sqrt ( discr ) / ( 2*a );
        ans2 = -b / ( 2*a );

        if ( a == 0 )
        {
            cor = -c / b;

            printf( "\t%g", cor);
        }

        else
        {
    // check do not match if the roots

            if ( (ans1 + ans2) == (ans1 - ans2) )
                printf ( "\tAnswers are: %g", ans1 - ans2);
            else
            printf ( "\tAnswers are: %g, %g", ans1 + ans2, ans1 - ans2 );
        }
    }
}

