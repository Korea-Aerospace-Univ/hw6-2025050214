#include <stdio.h>

int main() {
    int N;
    int a[20], b[20];
    
    int *p, *q;
    
    scanf("%d", &N);
    
    // 첫번째 배열 입력
    for (p = a; p < a + N; p++) {
        scanf("%d", p);
    }

    // 두번째 배열 입력
    for (q = b; q < b + N; q++) {
           scanf("%d", q);
    }

    // 역방향으로 더해서 출력
    for (p = a, q = b + N - 1; p < a + N; p++, q--) {
        printf(" %d", *p + *q);
    }

    return 0;
}
