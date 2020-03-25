#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include<stdlib.h> //题目：将一个数组逆序输出//
int main()
{

	system("color 1F"); // 设定显示框为蓝底白字//
	system("mode con cols=80 lines=30");
	//固定显示框尺寸
	//******************************************程序主体分割线（顶部）*************************//
	int i, j; int a[100];
	char ch;
	while (1)
	{
		printf("请输入一个数组,输入完毕按q确认\n");
		for (i = 0; i < 100; i++)
		{
			printf("请输入第%d个数组元素", i + 1);
			scanf("%d", &a[i]);
			ch = getchar();
			if (ch == 'q') break;
		}
		printf("逆序输出:\n");
		for (j = i - 1; j >= 0; j--)
			printf("%d ", a[j]);
		printf("\n----------------------------------------------------------------------------\n");
	}
	//******************************************程序主体分割线(底部)*******************//
	return 0;
}