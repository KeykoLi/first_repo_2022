#include <stdio.h>
#include <math.h>

//commentar
int main()
{
    double y = 7.315 , z = 3.127;
    double p1 =16*pow(y,2) ;
    double p2 =exp(y*z) ;
    double p3 = cbrt(z+1.51);
    double p4 = log10(y*z);

    double a=p1+ p2 +p3+p4;

    printf("result: %lf\n", a);

    return 0;
}
