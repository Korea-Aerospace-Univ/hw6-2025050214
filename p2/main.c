#include <stdio.h>

int main() {
    int N;
    int a[20], b[20];
    
    int *p, *q;
    
    scanf("%d", &N);
    
    for (p = a; p < a + N; p++) {
        scanf("%d", p);
    }

    for (q = b; q < b + N; q++) {
           scanf("%d", q);
    }
     
    for (p = a, q = b + N - 1; p < a + N; p++, q--) {
        printf(" %d", *p + *q);
    }

    return 0;
}
