#include <stdio.h>

int main(void) {
    int scores[] = {1, 2, 3, 4, 5, 6};
    int i, size;
    
    // sizeof() = 배열의 원소 개수 계산 
    // 1size = 4(byte), sizeof(scores) = 24(byte), sizeof(scores[0] = 4(byte))
    // size에 저장되는 정수 6
    size = sizeof(scores) / sizeof(scores[0]);

    // 배열의 원소를 순서대로 출력
    for(i=0; i<size; i++) {
        printf("%d", scores[i]);
    }

    return 0;
}