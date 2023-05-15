#include <stdio.h>

int get_integer() {
    int value;
    printf("정수를 입력하시오: ");
    scanf("%d", &value);
    return value;
}

int add(int x, int y) {
    return x+y;
}

int minus(int x, int y){
    if(x < y) {
        return y-x;
    } return x-y;
}

int multipl(int x, int y){
    return x*y;
}

int main(void) {  
int x = get_integer();
int y = get_integer();

int sum = add(x, y);
int sub = minus(x, y);
int mul = multipl(x, y);

printf("두 수의 합 : %d\n두 수의 차(더 큰 수에서 차감) : %d\n두 수의 곱 : %d\n", sum, sub, mul);
return 0;
}