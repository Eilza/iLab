#include <stdio.h>

#ifndef stack.h
#define stack.h

struct List
{
	int value;
	struct List* next;
};

bool isEmpty ( List* stack );

List* Push ( List* stack, int i );

int Pop(List** stack);

int getCount( List* stack );

List* Delete( List* stack );

#endif
