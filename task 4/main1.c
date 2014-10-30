#include "stack.h"

/*int main()
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
}*/

int conversion ()
{
    FILE* source = fopen ( "source.txt", "r");
    assert ( source != 0);
    FILE* code = code ( "code.txt", "w")
    int c=0;
    while ( (( c = getc( source )) != EOF) || (( c = getc( source )) != '\n') ) //there I don't know how select a piece of string until a space and compare it with the command
    {

    }
}

double get_code_by_file (char* str)
{
    if (strcmp(str,"push") == 0)
    {
        ;
    }
    else if (strcmp(str,"pop") == 0)
    {
        ;
    }
    else if (strcmp(str,"add") == 0)
    {
       ;
    }
    else if (strcmp(str,"mul") == 0)
    {
        ;
    }
    else if (strcmp(str,"end") == 0)
    {
        ;
    }
    else if (strcmp(str,"jmp") == 0)
    {
        ;
    }
    else if ( (strcmp(str, "\n") == 0 || strcmp(cmd, "") == 0) )
    {
        ;
    }

}
