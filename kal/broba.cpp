#include "broba.h"

double MyExp(double a, double b)
{
    double c=a;
    for (int i=1; i<b; i++)
        a=a*c;
return a;
}
