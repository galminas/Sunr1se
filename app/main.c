#include <stdio.h>
//48b8b6fc1050d8491300c4a17877aba50e69bc33
#include "myfunc.h"

int main()
{
    double a;
    double b;
    double c;
    double kor;
    int g;
    int i;
    do{
    g = scanf ("%lf%lf%lf",&a, &b, &c);
    }
    while (g != 3);
    for ( i = 0;i < 2;i++) {
        if ( (a == 0.0 && b == 0.0) || (b * b - 4 * a * c) < 0 || ((a == 0.0 || (b * b - 4 * a * c)) == 0.0 && i == 1)){
            printf ("\n");
            break;
        }
        kor = korny(a,b,c,i);
        printf ("x%d = %lf ",i+1, kor);
        if (i == 1) printf ("\n");
    }
    return myfunc(2);
}
