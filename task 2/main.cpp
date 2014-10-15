#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{

    struct List* stack = NULL;

    if ( isEmpty( stack ) )

        printf ( "stack is empty \n" );
    else
        printf ( "stack is not empty \n" );

    //fill stack
    stack = Push ( stack, 54 );
    stack = Push ( stack, 60 );

    //see function push works correctly
    if ( isEmpty( stack ) )

        printf ("Push works incorrectly, stack is still empty \n");
    else
        printf ("Push works correctly \n ");

     printf ("%d", Pop( stack ) );

     printf ("%d", getCount( stack ) );

     stack = Delete ( stack );

     //see function Delete work
     if ( isEmpty( stack ) )

        printf ("Delete works correctly, stack is empty");
     else
        printf ("Delete works incorrectly");

     return 0;
}
