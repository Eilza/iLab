#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    struct List* stack = NULL;
    if ( isEmpty(stack) )
        printf ( "stack is empty \n" );
    else
        printf ( "Stack is not empty \n" );

    bool isEmpty(List* stack);

    List* push( List* stack, int i );

    int pop(List* stack);


    int getCount( List* stack );

    List* Delete( List* stack );
}
