#include <stdio.h>
#define STUDENTS 5

int main(void) {
    int scores[STUDENTS];
    int sum = 0;
    float average = 0;

    for (int i = 0; i < STUDENTS; i++) {
        printf("학생들의 성적을 입력하시오: ");
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < STUDENTS; i++) {
        sum += scores[i];
    }
    
    // 더블형으로 캐스팅
    average = (float) sum / STUDENTS;
    printf("성적 평균= %.2f\n", average);

    return 0;
}