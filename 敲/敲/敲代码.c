#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("你愿意敲代码吗? 1表示愿意，0表示不愿意：\n");

	int choice;

	scanf("%d", &choice);

	if (choice == 1)//==表示比较相等
	                //=表示取值
	{
		printf("你会找到好offer！\n");
	}
	else{
		printf("回家卖红薯吧！\n");
	}
	return 0;
}