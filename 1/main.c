#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "functions.h"

int main ()
{
    float a, b, c = 0;

    a = inputcontrol (1);

    b = inputcontrol (2);

    c = inputcontrol (3);

    calculating ( a, b, c );

    return 0;
}
