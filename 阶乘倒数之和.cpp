#include <stdio.h>

int main() {
    int n, i, m = 1;
    float zhong;
    float daan;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        m = m * i;
        zhong=1.0/m;
        daan+=zhong;
    }
     printf("%.2f", daan);
    return 0;
}
