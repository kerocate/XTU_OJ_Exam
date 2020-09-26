#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double a,b,angle;
    scanf("%lf %lf %lf",&a,&b,&angle);
    printf("%g\n",
        sqrt(
            a*a + 
            b*b - 
            2*a*b*cos(angle*3.1415926/180)
        )
    );
    return 0;
}
