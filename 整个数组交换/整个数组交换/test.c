#include<stdio.h>
#include<Windows.h>


void Swap(int _arr1[],int _num1,int _arr2[],int _num2)
{
	_num1 = sizeof(_arr1) / sizeof(_arr1[0]);
	_num2 = sizeof(_arr2) / sizeof(_arr2[0]);

		int n = 0;
		for (; n < _num1; n++)
		{
			int temp[] = { 0 };
			temp[n] = _arr1[n];
			_arr1[n] = _arr2[n];
			_arr2[n] = temp[n];
		}
}

void Show(int _arr[], int num)
{
	int i = 0;
	for (; i < num; i++)
	{
		printf(" %d", _arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr1[] = { 1, 2, 4, 6, 8, 0, 5 };
	int arr2[] = { 12, 14, 17, 15, 19, 10, 13 };

	int num1 = sizeof(arr1) / sizeof(arr1[0]);
	int num2 = sizeof(arr2) / sizeof(arr2[0]);
	
	printf("arr1:");
	Show(arr1, num1);
	printf("arr2:");
	Show(arr2, num2);

	Swap(arr1,num1,arr2,num2);

	printf("arr1:");
	Show(arr1, num1);
	printf("arr2:");
	Show(arr2, num2);


	
	system("pause");
	return 0;
}