#include<stdio.h>
#include<math.h>
#define PI 3.14159265

int main(int argc, char const *argv[])
{
    printf("%g\n", 
        pow(sin(PI/4),2) +
        sin(PI/4) *
        cos(PI/4) -
        pow(cos(PI/4),2)
    );
    return 0;
}
