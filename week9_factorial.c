
#include <stdio.h>

/* 재귀함수를 이용한 facotial 출력 
   재귀함수 = 자기 자신(함수)을 재호출 */
int factorial(int n) {
    if (n == 1) {
        return 1; 
    } return n*factorial(n-1);
}

int main(void) {
    int n;
    printf("알고 싶은 팩토리얼의 값: ");
    scanf("%d", &n);
    printf("%d!의 값은 %d입니다.\n", n, factorial(n));

    return 0;
}

