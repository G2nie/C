#include <stdio.h>
#include <math.h>

//사용자에게 계산 종류를 입력 받는 함수
int menu(void) {
    int n;
    printf("1.팩토리얼\n");
    printf("2.싸인\n");
    printf("3.로그(base 10)\n");
    printf("4.제곱근\n");
    printf("5.순열(nPr)\n");
    printf("6.조합(nCr)\n");
    printf("7.종료\n");
    printf("선택해주세요: ");
    scanf("%d", &n);
    return n;
}

//정수를 입력 받아 팩토리얼값을 계산해주는 함수
void factorial() {
    long long n, result=1, i;
    printf("정수를 입력하시오: ");
    scanf("%lld", &n); //lld : long long 타입

    for(i=1; i<=n; i++) {
        result = result * i;
    }
    printf("결과 = %lld\n\n", result);
}

//각도를 입력 받아 sin값을 계산해주는 함수
void sine() {
    double a, result;
    printf("각도를 입력하시오: ");
    scanf("%lf", &a); //lf : double 타입

    result = sin(a);
    printf("결과 = %lf\n\n", result);
}

//실수를 입력 받아 로그값을 계산해주는 함수
void logBase10() {
    double a, result;
    printf("실수값을 입력하시오: ");
    scanf("%lf", &a);

    //입력 받은 값이 0.0보다 클 때 계산
    if(a <= 0.0) {
        printf("오류\n");
    } else {
        result = log10(a);
        printf("결과 = %lf\n\n", result);
    }
}

int main(void) {
    //menu 함수를 호출하여 반환된 값의 case를 실행
    //정의해둔 1, 2, 3 메뉴가 아닌 다른 메뉴 선택 시 "잘못된 선택입니다." 출력
    while(1) {
        switch (menu()) {
            case 1:
                factorial();
                break;
            case 2:
                sine();
                break;
            case 3:
                logBase10();
                break;
            case 7:
                printf("종료합니다.\n");
                return 0;
            default:
                printf("잘못된 선택입니다.\n");
                break;
        }
    }
}