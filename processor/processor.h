#ifndef PROCESSOR_H_INCLUDED
#define PROCESSOR_H_INCLUDED

struct List
{
	int value;
	struct List* next;
};

    bool isEmpty ( struct List* stack );

    struct List* Push ( struct List* stack, int i );

    int Pop( struct List** stack );

    int getCount( struct List* stack );

    struct List* Delete( struct List* stack );


#endif // PROCESSOR_H_INCLUDED
