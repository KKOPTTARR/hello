#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>

#pragma warning(disable:4996)


void Menu()
{
	printf("###################################\n");
	printf("## 1. Guess              2. Quit ##\n");
	printf("###################################\n");
	printf("Please Select> ");
}
void Game()
{
	printf("...........游戏开始.............\n");
	srand((unsigned int)time(NULL));

	int data = rand() % 100 + 1;//[1, 100]
	printf("规则: 计算机会随机生成[1,100]之间的数字，你要能才出来，快试试吧!\n");
	//添加需求，比如让玩家猜5次，如果5次之后没有才出来，就算玩家失败
	for (;;){
		printf("Guess: ");
		int x = 0;
		scanf("%d", &x);

		if (x > data){
			printf("你猜大了!\n");
		}
		else if (x < data){
			printf("你猜小了!\n");
		}
		else{
			printf("恭喜你，猜对了, 数字是: %d\n", data);
			break;
		}
	}
	printf("...........游戏结束.............\n");
}

int main()
{

	int quit = 0;
	while (!quit)
	{
		Menu();
		int select = 0;
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			Game();
			printf("要不要在搞一把?\n");
			break;
		case 2:
			quit = 1;
			printf("game end!\n");
			break;
		default:
			printf("你的输入有误，请重新输入!\n");
			break;
		}
	}


	system("pause");
	return 0;
}