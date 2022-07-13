#include <stdio.h>
int main() {
    int i, n, m;
    while (scanf("%d", &i) != EOF) {
        m = 0;
        while (i != 0) {
            n = i % 10;
            m = m * 10 + n;
            i /= 10;
        }
        printf("%d\n", m);
    }
    return 0;
}
