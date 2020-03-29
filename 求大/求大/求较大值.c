#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>



int TWOMAX()
{

	int x;
	int y;
	int z;
	
	printf("请输入x和y：\n");
	scanf("%d %d", &x, &y);

	if (x <= y)
	{
		z = y;
	}
	else
	{
		z = x;
	}
	return z;
}

int main()
{
	int	result = TWOMAX();
	
	printf("较大值是%d\n", result);

    system("pause");
	
	return 0;
}