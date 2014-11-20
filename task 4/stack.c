#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
     FILE* code = fopen("Code.exe","rb");

    FILE* newsourse = fopen("NewSourse.txt","w");

    int command;

    char valuestr[15];

    while(!feof(code))
    {
        fscanf ( code, "%d", &command );

        switch (command)
        {
            case 555:

                fprintf (newsourse, "%s ", "push");

                fscanf (code, "%s", valuestr);

                fprintf (newsourse, "%s\n", valuestr);

                break;
            case 556 :

                fprintf (newsourse, "%s\n", "pop");

                break;
            case 557:

                fprintf (newsourse, "%s\n", "add");

                break;
            case 558:

                fprintf (newsourse, "%s ", "mul");

                break;
            case 559:

                fprintf (newsourse, "%s\n", "jmp");

                break;
            case 560:
                fprintf (newsourse, "%s\n", "end");

                fclose (newsourse);

                fclose (code);

                return 0;

                break;
        }
    }

    fclose (newsourse);

    fclose (code);
}
