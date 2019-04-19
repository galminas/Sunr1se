#include <math.h>
#include <stdio.h>

double korny(double a, double b, double c, int i){
    if( (a == 0.0 && b == 0.0) || ((b * b - 4 * a * c) < 0) )
        return 0.00001;
    else {
    if (a == 0.0)
        return (-c/b);
    else
        return ( (-b + pow(-1,i) * sqrt(b * b - 4 * a * c))/(2 * a));
    }
}

