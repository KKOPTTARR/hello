#include<stdio.h>
#include<windows.h>
#include<stible.h>
#pragma warning(disable:4996)



//show函数
void Show(int a[][5], int n)
{
	for (int i = 0; i < n; i++)
	{
		int j = 0;
		for (; j < 5; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

//指针形式
void Show(int *a, int n)
{
	int i = 0;
	for (; i < n; i++)
	{
		printf("%d", a[i][j]);
	}
	printf("\n");
}

int main()
{
	int a = 10;

	int *p = &a;
	//p的内容是a的地址
	int **pp = &p;
	//二级指针变量 内容是*p的地址
	int ***ppp = &pp;
	//三级指针变量 内容是**pp的地址




	//指针数组 是数组
	//int *arr[5]
	//内部放的全部都是int * 
	//即均为指针


	int




		system("pause");
	return 0;
}