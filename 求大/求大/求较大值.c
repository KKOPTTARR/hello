#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>



int TWOMAX()
{

	int x;
	int y;
	int z;
	
	printf("������x��y��\n");
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
	
	printf("�ϴ�ֵ��%d\n", result);

    system("pause");
	
	return 0;
}