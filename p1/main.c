#include <stdio.h>

int main (void) {
  char arr[10];
  char *p, *q;

  for (p = arr; p < arr + 10; p++) {
    scanf("%c", p);
  }

  char maxChar;
  int maxCount = 0;

  for (p = arr; p < arr + 10; p++) {
    int count = 0;

    for (q = arr; q < arr + 10; q++){
      if (*p == *q) {
        count++;
      }
    }
    if (count > maxCount) {
      maxCount = count;
      maxChar = *p;
    }
  }
  printf("%c %d\n", maxChar, maxCount);

  return 0;
}
