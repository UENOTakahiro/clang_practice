#include <stdio.h>
int main(){
    int time;
    scanf("%d", &time);
    int h, m, s;
    h = time / 3600;
    m = (time % 3600) / 60;
    s = (time % 3600) % 60;

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}