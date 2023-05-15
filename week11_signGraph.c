#include <stdio.h>
#include <math.h>
#define PI 3.141592 //원주율 상수로 정의

//각도를 rad값으로 계산하여 반환하는 함수
double rad(double degree) {
    return PI * degree / 180.0;
}

//입력된 숫자만큼 *출력
void drawbar(int height) {
    for (int i=0; i<height; i++) {
        printf("*");
    } printf("\n");
}


int main(void) {
    int degree, x, y;

    //0부터 90까지 10 간격으로 반복문 실행
    //반복문이 실행되는 동안 rad값을 sin함수로 계산하여 변수에 저장
    for (degree=0; degree<=90; degree+=10) {
        y = (int)(60*sin(rad((double)degree))+0.5);
        
        //drawbar() 호출하여 y값을 매개변수로 넘겨줌
        drawbar(y);
    } 
    return 0;
}