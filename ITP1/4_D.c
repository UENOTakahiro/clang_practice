#include <stdio.h>

int main(){
    int n, i, min, max, a;
    long long int sum;
    scanf("%d", &n);

    min = 1000000;
    max = -1000000;
    sum = 0;

    for(i=0;i<n;i++){
        scanf("%d", &a);
        if(a < min){
            min = a;
        }
        if(a > max){
            max = a;
        }
        sum += a;
    }

    printf("%d %d %lld\n", min, max, sum);

    return 0;
}