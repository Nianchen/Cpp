#include <stdio.h>
int main() {
    int i, j, n;

    for (i = 1; i <= 9; i++)
		 {
        for (j = 1; j <= i; j++) {
            printf("%d*%d=%d ", i, j, j * i);
        }
        printf("\n");
    }
}
