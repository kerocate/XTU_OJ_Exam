#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double Xa, Ya, Xb, Yb;
    scanf("%lf %lf %lf %lf", &Xa, &Ya, &Xb, &Yb);
    printf("%g\n",
        sqrt(
            (Xa - Xb) * (Xa - Xb) +
            (Ya - Yb) * (Ya - Yb)
        )
    );
    return 0;
}
