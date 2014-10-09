
#include "stack.h"

bool isEmpty( List* stack )
{
    if ( stack == NULL )
        return true;
    else
        return false;
}


List* push( List* stack, int i )
{
    for ( int i = 0; i < 1; i++ )
{
	struct List* temp = stack;
	stack = ( struct List ) calloc ( 1, sizeof( struct List ) );
	stack -> value = i;
	stack -> next = temp;
}
}

int pop(List* stack)
{
    struct List* temp = stack;
    stack = stack -> next;
    free(temp);

}

int getCount( List* stack )
{

}

List* Delete( List* stack )
{
    struct List* temp = stack;
    stack = stack -> next;
    free(temp);
    return stack;
}
