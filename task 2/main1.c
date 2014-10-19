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

     printf ("%d", Pop(&stack ) );

     printf ("%d", getCount( stack ) );

     stack = Delete ( stack );

     return 0;
}

