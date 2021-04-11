#include<stdio.h>
int main()
{
	int arr[5] = { 45, 78, 90, 98, 85 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 1; i <= 5; i++)
	{
		if (arr[i] >= 80)
		{

			printf("%d ", arr[i]);
			printf("%d\n", i);

		}
	}
	return 0;

}