#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("你愿意敲代码吗？0表示愿意，1表示不愿意：\n");

	int choice = 1;

	scanf("%d", &choice);//&叫做取地址符号

	if (choice == 1)//==表示比较相等
		            //=表示赋值
	{
		printf("你会拿到好工作！\n");
	}
	else
	{
		printf("回家卖红薯吧！\n");
	}
	
	return 0;
}