#include <stdio.h>
#include <math.h>

int main(){
    double r;
    scanf("%lf", &r);

    double area, length;
    area = r * r * M_PI;
    length = 2 * r * M_PI;

    printf("%lf %lf\n", area, length);

    return 0;
}