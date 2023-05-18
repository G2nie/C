#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

int main(void) {
    int i;
    int scores[SIZE];

    // 난수값 생성
    srand((unsigned)time(NULL));

    // 배열에 생성한 난수값(0~100) 채우기
    for(i = 0; i < SIZE; i++) {
        scores[i] = rand() % 100;
    }

    // 출력
    for(i = 0; i < SIZE; i++) {
        printf("scores[%d]=%d\n", i, scores[i]);
    }

    return 0;
}