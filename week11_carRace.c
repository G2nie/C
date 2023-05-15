#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

//자동차의 주행 거리만큼 화면에 *을 찍는 함수
void disp_car(int car_number, int distance) {
    int i;
    
    printf("CAR #%d:", car_number);

    for(i=0; i<distance/10; i++) {
        printf("*");
    } printf("\n");
}

int main(void) {
    int i; //주행 횟수
    int car1_dist=0, car2_dist=0; //자동차 주행 거리

    //현재 시간을 기준으로 난수 생성
    srand((unsigned)time(NULL));

    //반복 횟수: 6번
    //난수를 생성하여 자동차 주행 거리에 누적(범위: 0~99)
    //disp_car() 호출하여 화면에 자동차별 주행 거리 표시
    for(i=0; i<6; i++) {
        car1_dist += rand()%100;
        car2_dist += rand()%100;
        disp_car(1, car1_dist);
        disp_car(2, car2_dist);
        printf("----------------\n");

        //사용자가 임의의 키를 입력할 때까지 멈춤
        _getch(); 
    }
    return 0;
}