#include <stdio.h>
#include<windows.h>

//打印二进制中1个数
int CountOne(int i)
{
	int count = 0;
	while (n != 0)
	{
		count++;
		n = n&(n - 1);
	}
	return count;
}





//交换（不创建临时变量）
int main()
{
	int a = 1;
	int b = 2;
	printf("原 a：%d b：%d\n", a, b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("现 a：%d b：%d\n", a, b);




	return 0;
}