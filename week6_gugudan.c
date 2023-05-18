#include <stdio.h>

int main(void) {
    int n;
    int i = 1;

    printf("출력하고 싶은 단 : ");
    scanf("%d", &n);

    while (i <= 9) {
        printf("%d * %d = %d\n", i, i, i*i);
        i++;
    }
    return 0;
}