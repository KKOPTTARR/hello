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
	printf("...........��Ϸ��ʼ.............\n");
	srand((unsigned int)time(NULL));

	int data = rand() % 100 + 1;//[1, 100]
	printf("����: ��������������[1,100]֮������֣���Ҫ�ܲų����������԰�!\n");
	//������󣬱�������Ҳ�5�Σ����5��֮��û�вų������������ʧ��
	for (;;){
		printf("Guess: ");
		int x = 0;
		scanf("%d", &x);

		if (x > data){
			printf("��´���!\n");
		}
		else if (x < data){
			printf("���С��!\n");
		}
		else{
			printf("��ϲ�㣬�¶���, ������: %d\n", data);
			break;
		}
	}
	printf("...........��Ϸ����.............\n");
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
			printf("Ҫ��Ҫ�ڸ�һ��?\n");
			break;
		case 2:
			quit = 1;
			printf("game end!\n");
			break;
		default:
			printf("���������������������!\n");
			break;
		}
	}


	system("pause");
	return 0;
}