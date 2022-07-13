#include <stdio.h>

int main()
	{
		int n,m;
		scanf("%d",n);
		 if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
                printf("29\n");
	}
