#include <stdio.h>

int main(void) {
    int n;
    while(scanf("%d", &n) != EOF) {
        if (n == 0) {
            break;
        }
        for (int i=1; i<n; i++) {
            if (i%7 == 0) {
                continue;
            }
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}