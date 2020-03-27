#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "bit";
	char arr2[] = { 'b', 'i', 't' };
	char arr3[] = { 'b', 'i', 't', '\0' };

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);


	//strlen(表示长度-不包含0）
	//sizeof（表示空间-包括0）

	printf("%d\n", strlen("abcdef"));
	//输出6
	printf("%d\n", strlen("c:\test\328\test.c"));
	//输出14
	//c ：\t e s t \32 8 \t e s t . c


	//选择语句

	int select = 0;
	printf("请输入你的选择<1 or 2>");
	scanf("%d", &select);
	if (1 == select)//技巧：取等数字写左边
	{
		printf("OK!\n");
	}
	else if (2 == select)
	{
		printf("ok!\n");
	}
	else
	{
		printf("aaa\n");
	}


	//循环语句

	//while
	int i = 1;
	while (i < 10)
	{

		printf("%d\n", i);
		i = i + 1;
		//i+=1
		//i++意思同样
		//sleep(1000)延缓程序输出
	}


	//for
	int a = 0;
	for (; a < 10; a++)//!!!注意分号位置
	{
		printf("%d\n", a);

	}
	
	

	//函数
	
	int MyMul(int _x, int _y);//可去_
	{
		int x = 0;
		int y = 0;
		printf("输入两个数：x和y");
		scanf("%d %d", &x, &y);
		int z = x * y;
		return z;

	}
	//后接
	//int main（）
	//{
		//int seslut=MyMull()

//}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}