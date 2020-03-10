#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("你愿意敲代码吗？1表示愿意，0表示不愿意：");
	
	int choice = 0;

	scanf("%d", &choice);
	//&叫做取地址符号
	
	if (choice == 1)
	{
		printf("你会拿到好offer！\n");
	}
	else
	{
		printf("回家卖红薯吧！\n");
	}
	return 0;

}