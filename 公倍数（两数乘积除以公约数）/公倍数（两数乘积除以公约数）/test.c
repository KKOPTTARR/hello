#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int main()
{
	int n = 0;
	int m = 0;
	int num1 = 0;
	int num2 = 0;
	int i = 0;

	printf("请输入两整数:");

	scanf("%d%d", &num1, &num2);

	n = num1;
	m = num2;

	while (num2 != 0)
	{
		i = num1%num2;
		num1 = num2;
		num2 = i;
	}

	printf("最小公倍数为:%d\n", n*m / num1);

	system("pause");
	return 0;
}
