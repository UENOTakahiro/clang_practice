#include <stdio.h>

int main() {
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);

    while(1){
        if(op == '+'){
            printf("%d\n", a+b);
        }
        if(op == '-'){
            printf("%d\n", a-b);
        }
        if(op == '*'){
            printf("%d\n", a*b);
        }
        if(op == '/'){
            printf("%d\n", a/b);
        }
        if(op == '?'){
            break;
        }
        scanf("%d %c %d", &a, &op, &b);
    }

    return 0;
}