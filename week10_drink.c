#include <stdio.h>

// 전역 변수
int global = 10;

int main() {
  // 지역 변수
  int local = 20;
  
  // 저장형 변수
  register int regi = 30;
  
  printf("전역 변수: %d\n", global);
  printf("지역 변수: %d\n", local);
  printf("저장형 변수: %d\n", regi);

  // 변수 값 변경
  global = 50;
  local = 100;
  regi = 200;

  printf("\n변경 후 값\n");
  printf("전역 변수: %d\n", global);
  printf("지역 변수: %d\n", local); 
  printf("저장형 변수: %d\n", regi);

  return 0;
}
