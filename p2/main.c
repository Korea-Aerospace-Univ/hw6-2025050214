#include <stdio.h>

int main() {
    int N; // 입력받을 정수 개수
    int a[20], b[20]; // 두 개의 배열 선언
    
    int *p, *q; // 포인터 변수 선언

    // N 입력
    scanf("%d", &N);
    
    // 첫번째 배열 입력
    for (p = a; p < a + N; p++) {
        scanf("%d", p);
    }

    // 두번째 배열 입력
    for (q = b; q < b + N; q++) {
           scanf("%d", q);
    }

    // 첫번째 배열은 앞에서부터, 두번째 배열은 뒤에서부터 더해서 출력
    for (p = a, q = b + N - 1; p < a + N; p++, q--) {
        printf(" %d", *p + *q);
    }

    return 0;
}
