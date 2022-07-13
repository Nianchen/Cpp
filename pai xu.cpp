#include <stdio.h>
int main() {
    int n, i, b, t;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        for (b = 0; b < n; b++) {
            if (a[i] < a[b]) {
                t = a[i];
                a[i] = a[b];
                a[b] = t;
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
