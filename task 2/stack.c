
#include "stack.h"

bool isEmpty( struct List* stack )
{
    if ( stack == NULL )
        return true;
    else
        return false;
}


struct List* Push( struct List* stack, int i )
{

	struct List* temp = stack;

	stack = ( struct List* ) calloc ( 1, sizeof( struct List ) );

	stack -> value = i;

	stack -> next = temp;

	return stack;

}

int Pop( struct List** stack)
{
    int pop;

    struct List* temp = *stack;

    pop = temp -> value;

    (*stack) = temp -> next;

    free(temp);

    return pop;

}

int getCount( struct List* stack )
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

struct List* Delete( struct List* stack )
{
    struct List* temp = stack;

    while ( ( stack -> next ) != 0)
    {
        temp = stack;

        stack = stack -> next;

        free(temp);
    }
    free(stack);
}
