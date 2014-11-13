#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int assembler ()
{
    FILE* source = fopen ("Source.txt", "r");

    assert ( source != 0 );

    FILE* code = fopen ("Code.exe", "wb")

    char str[15], valuestr[15];

    while (!feof(sourse))
    {
        fscanf (sourse, "%s", str);

        if (strcmp(str,"push") == 0 )
        {
            fprintf (code, "%d ", 555);

            fscanf (sourse, "%s", valuestr);

            fprintf (code, "%s\n",valuestr);

            continue;
        }
        else if (strcmp(str,"pop") == 0)
        {
            fprintf (code, "%d ", 556);

            continue;
        }
        else if (strcmp(str,"add") == 0)
        {
            fprintf (code, "%d ", 557);

            continue;
        }
        else if (strcmp(str,"mul") == 0)
        {
            fprintf (code, "%d ", 558);

            continue;
        }
        else if (strcmp(str,"jmp") == 0)
        {
            fprintf (code, "%d ", 559);

            continue;
        }
        else if (strcmp(str,"end") == 0)
        {
            fprintf (code, "%d\n", 560);

            fclose (sourse);

            fclose (code);

            return 1;
        }
        else if ( (strcmp(str, "\n") == 0 || strcmp(cmd, "") == 0) )
        {
            return -1;
        }
        else
        {
             fprintf (code, "%s", "\0");

             fclose (sourse);

             fclose (code);
        }
    }


int main()
{
    int result,

    struct List* stack = NULL;

    if ( isEmpty( stack ) )

        printf ( "stack is empty \n" );
    else
        printf ( "stack is not empty \n" );

    FILE* code = fopen ("Code.exe", "rb")


    while(!feof(code))
    {
        fscanf ( code, "%d", &command );

        switch (command)
        {
            case 555:

                stack = Push ( stack,  );

                break;
            case 556 :

                Pop(&stack );

                break;
            case 557:

                result = 0;

                result = pop(&stack) + pop(&stack);

                stack = push(stack, result);

                break;
            case 558:

                result = 0;

                result = pop(&stack) * pop(&stack);

                stack = push(stack, result);

                break;
            case 559:



                break;
            case 560:
                fprintf (newsourse, "%s\n", End);

                fclose (newsourse);

                fclose (code);

                return 0;

                break;
        }
    }



}
