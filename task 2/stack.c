
#include "stack.h"

bool isEmpty( List* stack )
{
    if ( stack == NULL )
        return true;
    else
        return false;
}


List* Push( List* stack, int i )
{

	struct List* temp = stack;

	stack = ( struct List ) calloc ( 1, sizeof( struct List ) );

	stack -> value = i;

	stack -> next = temp;

	return stack;

}

int Pop(List** stack)
{
    struct List** temp = *stack;

    (*stack) = (*stack) -> next;

    free(temp);

    return stack;

}

int getCount( List* stack )
{

	if ( stack == NULL ) return 0;

	int count = 1;

	while ( stack -> next != NULL)

	{
	    stack = stack -> next;

	    count++;
    }

	return count;
}

List* Delete( List* stack )
{
    struct List* temp = stack;

    while ( ( stack -> next ) != 0)
    {
        temp = stack;

        stack = stack -> next;

        free(temp);
    }

    return stack;
}
