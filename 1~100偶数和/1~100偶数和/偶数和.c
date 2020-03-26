//求1-100之间的偶数和
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//函数原型
int calcSum(); //求1-100之间的偶数和

int calcSum()
{
	//1-100之间的偶数和
	int sum = 0;
	int i = 1;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{

			// sum++;
			sum += i;
		}
	}
	//将计算好的结果返回
	return sum;
}

int main()
{
	//如果函数有返回值，调用时，记得使用对应类型的变量来接收！
	int sum = calcSum();
	printf("1-100之间的偶数和为: %d\n", sum);
	return 0;
}
