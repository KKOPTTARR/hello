#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
//#define Odd(x)((x)&1)

//判断奇偶
//返回值： 0（否），i（是）

int isOdd(int _data)
{
	//更简洁
	//return _data & 1;
	//按位与
	
	//return _data % 2;
	//最简洁

	//return _data % 2 == 1;

	//return _data %2==1?1:0;
	
	int ret = (_data % 2 == 1 ? 1 : 0);
	//_data模2余1吗？
	//是，输出1；
	//不是，输出0
	return ret;

	/*if (_data % 2 == 1)
	{
		return 1;
	}
	return 0;*/
}

int main()
{
	//判断一个数是不是奇数
	printf("please enter your data: ");
	int data = 0;
	scanf("%d", &data);
	int ret = isOdd(data);
	if (0 == ret)
		//也可以
		//int ret =isOdd（data）
		//if（!isOdd（data）
		//!取反
		//去掉！则把下方“是”与“不是”换位

	{
		printf("不是");
	}
	else
	{
		printf("是");
	}


	printf("please enter your 范围: ");
	int start = 0;
	int end = 0;
	scanf("%d %d", &start, &end);
	//int ret = isOdd(data);
	for (; start <= end; start++)
	{
		if (isOdd(start))
		{
			printf("%d", start);
		}
		else
		{
			printf("不是\n");
		}
	}
	printf("\n");






	//选择
	int flag = 1;
	printf("请输入：\n");
	scanf("%d\n", &flag);
	if (flag == 1)
	{
		int x = 10;
		printf("%d\n", x);
	}
	int x = 20;
	printf("%d\n", x);

	//悬空if
	int a = 1;
	int b = 2;
	if (a == 1)
	{
		printf("请输入b的值：\n");
		scanf("%d\n", &b);
		if (b == 2)
		{
			printf("a=1,b=2\n");
		}
		else
		{
			printf("hehe\n");
		}
	}

	//int day = 0;
	//printf("请输入日期：\n");
	//scanf("%d\n", &day);
	//switch (day)
	//{
	//case 1:
	//	printf("一\n");
	//		break;
	//case 2:
	//	printf("二\n");
	//	    break; 
	//case 3:
	//		printf("三\n");
	//		break;
	//default:
	//	printf("error!\n");
	//	break;
	//}


	//笔试题
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n) //switch允许嵌套使用
		{
		case 1: n++;
		case 2: m++;
			n++; break;
			m++; break;
		}
	case 4:m++;
		break;
	default:
		break;
	}

	printf("m = %d, n = %d\n", m, n);
	
	
	system("pause");
	return 0;
	
}