#include <stdio.h>
#include<Windows.h>
#include<stdlib.h>

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5};
	int* p = arr1;
	
	int i = 0;
	for (; i < 5; i++)
	{
		printf("%d ", *(p + i));
	}

	system("pause");
	return 0;
}

