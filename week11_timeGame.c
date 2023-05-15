#include <stdio.h>
#include <time.h>

int main(void) {
    //시간을 나타내는 time_t 타입의 변수 선언
    time_t start, end;

    //현재 시간을 초 단위로 반환하여 변수에 저장
    start = time(NULL);
    printf("10초가 되면 아무 키나 누르세요.\n");
    
    //사용자가 임의의 키를 입력할 때까지 무한루프
    while(1) {
        if(getchar())
            break;
    } printf("종료되었습니다.");


    //현재 시간을 초 단위로 반환하여 변수에 저장
    end = time(NULL);
    
    //시작 시간과 종료 시간을 계산하여 경과된 시간 출력
    printf("경과된 시간은 %1d 초입니다.\n", end - start);

    return 0;
}