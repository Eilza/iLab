#include <stdio.h>

#ifndef stack.h
#define stack.h


bool isEmpty ( List* stack );

List* push ( List* stack, int i );

int pop (List* stack);


int getCount( List* stack );

List* Delete( List* stack );

#endif
