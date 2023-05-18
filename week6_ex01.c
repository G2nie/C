#include <stdio.h>

int main(void) {
    int a, b, n, i = 0;
    printf("반복할 횟수 지정 : ");
    scanf("%d", &n);

    while(i<=n){
        scanf("%d %d", &a, &b);
        printf("%d", a+b);
        i++;
    }
}