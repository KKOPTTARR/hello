#include<stdio.h>
#include<Windows.h>
#pragma warning (disable:4996)

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;

	printf("请输入a和b的值:");

	scanf("%d %d", &a, &b);

	sum = a + b;

	printf("a+b=%d\n", sum);

	system("pause");
	return 0;

}