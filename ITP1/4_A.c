#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int d, r;
    double f;
    d = a / b;
    r = a % b;
    f = (double)a / b;

    printf("%d %d %lf\n", d, r, f);
    return 0;
}