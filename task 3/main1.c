
#include "stack.h"

int main()
{
    int n, i=0, temp ;
    bool check;
    struct List* stack;
    char rnp[10000];
    scanf ( "%s", rnp );
    n=strlen(rnp);

    for ( i; i<n; i++ )
    {
        if ( ( rnp[i] >= '0' ) && ( rnp[i] <= '9' ) )
        {
           while ( ( rnp[i] != '+') || ( rnp[i] != '-') || ( rnp[i] != '/') || ( rnp[i] != '*') )
           {
               temp = temp * 10;
               temp = temp + ( rnp[i] - '0');
           }
           stack = push ( stack, temp, &check);
           temp = 0;
        }
        else
        {
            if ( rnp[i] == '+' )

                push( stack, ( pop( &stack) + pop( &stack) ), &check );

            else
            {
                if ( rnp[i] == '-' )

                    push( stack, -( pop( &stack) - pop( &stack) ), &check );

                else
                {
                    if ( rnp[i] == '*' )

                        push( stack, ( pop( &stack) * pop( &stack) ), &check );

                    else
                    {
                        if ( rnp[i] == '/' )

                            push( stack, 1/( pop( &stack) / pop( &stack) ), &check );
                    }
                }
            }
        }
    }

  printf( "%d", pop( &stack) );
    return 0;
}
