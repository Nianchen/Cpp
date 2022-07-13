#include<stdio.h>
#include<stdlib.h>
 
void BubbleSort(int a[], int len)
{
	int i, j, temp;
	for (j = 0; j < len - 1; j++)
	{
		for (i = 0; i < len - 1 - j; i++)
		if (a[i] > a[i + 1])
		{
			temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
		}
	}
}
 
int main()
{
	int arr[] = {1,3,5,4,8,7,6,9,0,2};
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	printf("≈≈–Ú«∞£∫");
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
 
	BubbleSort(arr, len);
	printf("≈≈–Ú∫Û£∫");
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
