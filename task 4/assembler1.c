#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

enum {PUSH=555,POP=556,ADD=557,MUL=558,JMP=559,CMP=560,PUSH_AX=561,PUSH_BX=562,PUSH_CX=563,PUSH_DX=564,LABEL=565,END=566};

int main ()
{
    int i=0,k=0;

    FILE* sourse = fopen ("Sourse.txt", "r");

    assert ( sourse != 0 );

    FILE* code = fopen ("Code1.txt", "wb");

    char str[25], valuestr[25];

    while (!feof(sourse))
    {
        printf ("%s","tak");

        fscanf (sourse, "%s", str);

        if (strcmp(str,"push") == 0 )
        {
            i++;

            fprintf (code, "%d ", PUSH);

            fscanf (sourse, "%s", valuestr);

            fprintf (code, "%s\t",valuestr);

            continue;
        }

        if (strcmp(str,"push_AX") == 0 )
        {
            i++;

            fprintf (code, "%d ", PUSH_AX);

            fscanf (sourse, "%s", valuestr);

            fprintf (code, "%s\t",valuestr);

            continue;
        }
        if (strcmp(str,"push_BX") == 0 )
        {
            i++;

            fprintf (code, "%d ", PUSH_BX);

            fscanf (sourse, "%s", valuestr);

            fprintf (code, "%s\t",valuestr);

            continue;
        }
        if (strcmp(str,"push_CX") == 0 )
        {
            i++;

            fprintf (code, "%d ", PUSH_CX);

            fscanf (sourse, "%s", valuestr);

            fprintf (code, "%s\t",valuestr);

            continue;
        }
        if (strcmp(str,"push_DX") == 0 )
        {
            i++;

            fprintf (code, "%d ", PUSH_DX);

            fscanf (sourse, "%s", valuestr);

            fprintf (code, "%s\t",valuestr);

            continue;
        }
        else if (strcmp(str,"pop") == 0)
        {
            i++;

            fprintf (code, "%d\t", POP);

            continue;
        }
        else if (strcmp(str,"add") == 0)
        {
            i++;

            fprintf (code, "%d\t", ADD);

            continue;
        }
        else if (strcmp(str,"mul") == 0)
        {
            i++;

            fprintf (code, "%d\t", MUL);

            continue;
        }
        else if (strcmp(str,"jmp") == 0)
        {
            i++;

            fprintf (code, "%d ", JMP);

            fscanf (sourse, "%s", valuestr);

            printf ("%s","sebe");

            fprintf (code, "%s\t",LABEL);

            fscanf (sourse, "%s", valuestr);

            fprintf (code, "%s\t",valuestr);

            continue;
        }
        else if (strcmp(str,"cmp") == 0)
        {
            i++;

            fprintf (code, "%d\t", CMP);

            continue;
        }
        if (strncmp(str,"label",5) == 0 )
        {
            i++;

            k = i;

            fprintf (code, "%d ", LABEL);

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
             fprintf (code,"\0");

             fclose (sourse);

             fclose (code);
        }
    }

     return 0;
}

