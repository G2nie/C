#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 45
int main(void) {
    int i;

    // 1byte = 8bit
    // *unsigned = 음수 사용 x 양수값
    srand( (unsigned)time(NULL) ); //현재 시각을 기준으로 시드를 다르게 해서 난수 생성
    for(i=0; i<6; i++) {
        printf("%d", 1+rand()%MAX);
    }
    return 0;
}