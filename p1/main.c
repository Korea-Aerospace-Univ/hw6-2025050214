#include <stdio.h>

int main (void) {
  char arr[10]; // 문자 10개를 저장할 배열 
  char *p, *q; // 포인터 변수 선언
  
  // 문자 10개 입력
  for (p = arr; p < arr + 10; p++) {
    scanf("%c", p);
  }

  char maxChar; // 가장 많이 나온 문자 저장
  int maxCount = 0; // 최대 빈도수 저장
  
  // 각 문자의 등장 횟수 계산
  for (p = arr; p < arr + 10; p++) {
    int count = 0; // 현재 문자의 개수 저장
    
    // 배열 전체를 돌면서 같은 문자 개수 세기
    for (q = arr; q < arr + 10; q++){
      if (*p == *q) {
        count++;
      }
    }
    // 현재 문자의 개수가 최대값보다 크면 갱신
    if (count > maxCount) {
      maxCount = count;
      maxChar = *p;
    }
  }
  // 결과 출력
  printf("%c %d\n", maxChar, maxCount);

  return 0;
}
