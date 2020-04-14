//编写代码实现，模拟用户登录情景，并且只能登录三次
//(只允许输入三次密码，如果密码正确则提示登录成
//如果三次均输入错误，则退出程序

#include<stdio.h>
#include<Windows.h>
#define SIZE 128
#define try_count 3
#pragma warning(disable:4996)

#define DEFUALT_NAME "kang"
#define DEFAULT_PASSWORD "123"

int main()
{
	char name[SIZE];
	char password[SIZE];
	int count = 0;//尝试次数
START:
	count = try_count;
	while (count > 0)
	{
		printf("请输入你的账号：");
		scanf("%s", name);
		printf("请输入你的密码：");
		scanf("%s", password);

		/*printf("%s %s\n", name, password);*/

		if (strcmp(name, DEFUALT_NAME) == 0 && strcmp(password, DEFAULT_PASSWORD) == 0)
		{
			printf("欢迎%s进入\n", name);
			break;
		}
		else
		{
			count--;
			printf("登陆失败,请检查账号或密码,你还剩%d次机会\n",count);
		}
	}
	if (count == 0)
	{
		printf("登陆失败，请60秒后再试！\n");
		int time = 1;
		while (time <= 60)
		{
			printf("离上次登录已过...%ds\r", time);
			Sleep(100);
			time++;
		}
		printf("\n");
		goto START;
	}


	system("pause");
	return 0;
}


//goto语句
/*int main()
{
	int flag = 1;
START:
	printf("hello\n");
	if (flag == 1)
	{
		goto START;
	}
}*/
//无限循环hello
//goto可以往上跳也可以往下跳



//cmd命令
//关机：shutdown -s -t 180 (180s后关机）
//虚拟键盘：osk
//计算器：calc

/*int main()
{
system("....");
return 0;
*/
//同样是命令


//我是猪关机程序
/*int main()
{
	system("shutdowm -s -t 180");
	printf("你的设备即将在180秒后关闭，除非你说‘我是猪’\n");
	char input[SIZE];

	while (1)
	{
		printf("input: ");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdowm -a");
			printf("关机程序已取消\n");
			break;
		}
		else
		{
			printf("回答错误，再给你一次机会\n");
		}
	}
	system("pause");
	return 0;
}*/



//dos 星球大战
//telnet towel.blinkenlights.nl