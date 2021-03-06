

#include "stack.h"

struct List* create_stack( struct List* stack, int first_element, bool* check) // create stack
{
    if ( stack != NULL)
    {
        *check = false;
        return stack;
    }
    else
    {
        struct List* stack = (struct List*) calloc ( 1, sizeof(struct List));
        stack->value = first_element;
        stack->next = NULL;
        *check = true;
        return stack;
    }
};


struct List* push( struct List* stack, int new_element, bool* check) // new element
{
    struct List* temp = stack;

    stack = ( struct List* ) calloc ( 1, sizeof ( struct List ) );

    if ( stack != NULL )
    {
        stack->value = new_element;
        stack->next = temp;
        *check = true;
        return stack;
    }
    else
    {
        *check = false;
        return stack;
    }
};


int pop( struct List** stack) // delete top element
{
    if ( empty_stack (*stack) )
        {
            return -2147483648;
        }
    else
        {
            int copy;
            struct List* temp = *stack;
            copy = (*stack)->value;
            *stack = (*stack)->next;
            free( temp );
            return copy;
        }
}


bool empty_stack( struct List* stack ) // check empty stack
{
    if ( stack == NULL )
        return true;
    else
        return false;
}


int deep_stack( struct List* stack ) // deep stack
{
    int deep;
    while ( !empty_stack(stack) )
    {
        deep++;
        stack = stack->next;
    }
    return deep;
}


struct List* delete_stack( struct List* stack, bool *check ) // delete stack
{
    if ( stack == NULL )
    {
        *check = false;
        return stack;
    }
    else
    {
        while( !empty_stack(stack) )
        {
            struct List* temp = stack;
            stack = stack->next;
            free(temp);
        }
        *check = true;
        return stack;

    }
}


bool output_stack( struct List* stack) // output stack
{
    int counter = 0;
    if ( stack == NULL)
    {
        return false;
    }
    else
    {
        while ( !empty_stack(stack) )
        {
            printf( " { %d } : [ %d ] \n", counter , stack->value );
            counter ++;
            stack = stack->next;
        }
        return true;
    }
}

