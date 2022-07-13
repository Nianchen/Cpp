#include <stdio.h>
int a[1000], b[1000], c[1000];
int main() {
    int n, i, j, k, l, m;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= a[i]; j++) {
            for (k = j; k <= 9; k++) {
                printf("%d*%d=%d ", j, k, j * k);
            }
            printf("\n");
        }
    }

    return 0;
}
