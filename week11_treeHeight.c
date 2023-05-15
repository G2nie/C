#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

int main(void) {
    double height, distance, tree_height, degrees, radians;
    
    //사용자에게 나무와의 거리, 측정자의 키, 각도를 입력 받음
    printf("나무와의 거리(단위는 미터): ");
    scanf("%lf", &distance);
    
    printf("측정자의 키(단위는 미터): ");
    scanf("%lf", &height);
    
    printf("각도(단위는 도): ");
    scanf("%lf", &degrees);
    
    //각도를 라디안 단위로 계산하여 변수에 저장
    radians = degrees * (3.141592 / 180.0);
    
    //math.h 라이브러리의 tan() 호출하여 나무의 높이 계산
    tree_height = tan(radians) * distance + height;
    
    printf("나무의 높이(단위는 미터): %lf \n", tree_height);
    return 0;
}
