#include <stdio.h>

//정수를 입력 받는 함수
int get_integer(void) {
    int n;
    printf("정수를 입력하시오: ");
    scanf("%d", &n);
    return n;
}

//소수면 1, 소수가 아니면 0을 리턴하는 함수
int is_prime(int n) {
    int i;
    for(i=2; i<n; i++) {
        if(n%i == 0) {
            return 0;
        }
    return 1;
    }
}

int main(void) {
    int n = get_integer();

    if(is_prime(n)==1) {
        printf("%d 소수입니다.\n", n);
    }
    else {
        printf("%d 소수가 아닙니다.\n", n);
    }
    return 0;
    }