
#include "stack.h"

int main()
{
    int n, i=0, first_element, new_element ;
    bool check;
    struct List* stack;
    char rnp[10000];
    scanf ( "%s", rnp );
    n=strlen(rnp);
    for ( i; i<n; i++ )
    {

        if ( ( i == 1 ) && ( ( rnp[i] != '+') || ( rnp[i] != '-') || ( rnp[i] != '/') || ( rnp[i] != '*') ) )

            stack = create_stack( stack, rnp[i]-'0' , &check);

        else
        {
            if ( ( i != 1 ) && ( ( rnp[i] != '+') || ( rnp[i] != '-') || ( rnp[i] != '/') || ( rnp[i] != '*') ) )

            stack = push( stack, rnp[i]-'0', &check);

            else
            {
                if ( rnp[i] == '+' )

                    first_element = first_element + new_element;
                else
                {
                    if ( rnp[i] == '-' )

                      first_element = first_element - new_element;
                    else
                    {
                        if ( rnp[i] == '*' )

                          first_element = first_element * new_element;

                          else
                          {
                              if ( rnp[i] == '/' )

                                first_element = first_element / new_element;
                          }
                    }
                }
            }
        }
    }

    return 0;
}
