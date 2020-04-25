#include "test.h"

void Menu()//建立菜单
{
	printf("######################\n");
	printf("######  三子棋  ######\n");
	printf("### 1.Play   2.Exit ##\n");
	printf("######################\n");
	printf("please select: >> ");
}


int main()
{
	int quit = 0;
	while (!quit){
		int select = 0;
		Menu();
		scanf("%d", &select);

		switch (select){
		case 1:
			Game();
			break;
		case 2:
			quit = 1;
			break;
		default:
			printf("Enter Error!\n");
			break;
		}
	}

	system("pause");
	return 0;
}