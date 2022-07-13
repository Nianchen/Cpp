#include <stdio.h>
int main() {
    int i, n, j;
    scanf("%d", &n);
    j = n;
    int a[n];
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d\n", n);
    for (j; j > 0; j--) {
        printf("%d ", a[j]);
    }
    return 0;
}
