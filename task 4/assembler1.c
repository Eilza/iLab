#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

enum {PUSH=555,POP=556,ADD=557,MUL=558,JMP=559,END=560};

int main ()
{
    FILE* sourse = fopen ("Sourse.txt", "r");

    assert ( sourse != 0 );

    FILE* code = fopen ("Code1.txt", "wb");

    char str[15], valuestr[15];

    while (!feof(sourse))
    {
        fscanf (sourse, "%s", str);

        if (strcmp(str,"push") == 0 )
        {
            fprintf (code, "%d ", PUSH);

            fscanf (sourse, "%s", valuestr);

            fprintf (code, "%s\t",valuestr);

            continue;
        }
        else if (strcmp(str,"pop") == 0)
        {
            fprintf (code, "%d\t", POP);

            continue;
        }
        else if (strcmp(str,"add") == 0)
        {
            fprintf (code, "%d\t", ADD);

            continue;
        }
        else if (strcmp(str,"mul") == 0)
        {
            fprintf (code, "%d\t", MUL);

            continue;
        }
        else if (strcmp(str,"jmp") == 0)
        {
            fprintf (code, "%d ", JMP);

            fscanf (sourse, "%s", valuestr);

            fprintf (code, "%s\t",valuestr);

            continue;
        }
        else if (strcmp(str,"end") == 0)
        {
            fprintf (code, "%d\t", END);

            fclose (sourse);

            fclose (code);

            return 1;
        }
        else if ( (strcmp(str, "\n") == 0 || strcmp(str, "") == 0) )
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

     return 0;
}

