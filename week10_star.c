#include <stdio.h>

int main(void) {  
    int i, j; // 사용할 변수 선언

    /* 오름차순 
    for(i=1; i<=5; i++) {
        for(j=0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    } */

    /* 내림차순 
    for(i=0; i<=5; i++) {
        for(j=5; j>i; j--) {
            printf("*");
        }
        printf("\n");
    } */

    /* 숫자 출력
    for(i=0; i<=5; i++) {
        for(j=1; j<=i; j++) {
            printf("%d", j);
        }
        printf("\n");
    } */

    /* 숫자 출력 
    for(i=0; i<=5; i++) {
        for(j=5; j>i; j--) {
            printf("%d", j);
        }
        printf("\n");
    } */

    /* 백준 2439번 */
    for(int i=1; i<=5; i++) {
        for(j=1; j<=5; j++) {
            printf(" ");
        } for(j=0; j<i; j++) {
            printf("*");
        } printf("\n");
    }
}