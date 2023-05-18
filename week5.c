#include <stdio.h>
int main(void) {

    int a, b;
    printf("문자를 입력하시오:");
    scanf("%d, &a");
    scanf("%d, &b");


    if(a > b) 
        printf(">");

    else if(a < b) 
        printf("<");
    
    else    
        printf("==");

    return 0;
}