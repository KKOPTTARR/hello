#include<stdio.h>
#include<Windows.h>

//冒泡


void Bubble(int arr[], int num)
//但其实传的是指针，也可以写int *arr
{
	int i = 0;
	for (; i < num - 1; i++)
	{
		int j = 0;
		int flag = 1;
		for (; j <num - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}


	//printf("%d\n", sizeof(arr));
	//int i = 0;
	//for (; i < num; i++)
	//{
	//	printf("arr[%d]:%d\n", i, arr[i]);
	//显示数组
	//}

}


void Show(int arr[], int num)
{
	int i = 0;
	for (; i < num; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{

	int arr[] = { 19, 18, 7, 20, 8, 1, 2, 3, 11, 21, 4 };
	int num = sizeof(arr) / sizeof(arr[0]);
	Show(arr, num);
	Bubble(arr, num);
	Show(arr, num);


	system("pause");
	return 0;
}