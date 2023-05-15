#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//무작위 정수 반환: rand()
//변수 head는 무작위 정수를 2로 나누었을 때 나머지값을 반환(0 or 1)
int coin_toss(void) {
    int head = rand() % 2;
    return head;
}

int main(void) {
    int toss;
    int heads = 0;
    int tails = 0;

    //난수 생성: srand()
    //현재 시간을 기준으로 시드값을 설정: time(NULL)
    //time()을 unsigned로 캐스팅하는 이유는 srand가 int형이기 때문임.
    srand((unsigned)time(NULL)); 


    //동전을 100번 던져서 동전 앞면과 뒷면이 나온 횟수를 확인하는 반복문
    // coin_toss() 함수를 호출하여 반환된 값이 1이면 앞면, 그렇지 않으면 뒷면에 카운트
    for (toss = 0; toss < 100; toss++) {
        if(coin_toss() == 1) 
            heads++; 
        else
            tails++;
        }

        printf("동전의 앞면: %d \n", heads);
        printf("동전의 뒷면: %d \n", tails);
        return 0;
        }


