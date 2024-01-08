#include <stdio.h>
#include "ab7_32b_my_math_functions.h"
int absWertInt( int v )
{
    if ( v < 0 )
    {
        return -v;
    }
    else
    {
        return v;
    }
}

double absWertDouble( double v )
{
    if ( v < 0.0 )
    {
        return -v;
    }
    else
    {
        return v;
    }
}