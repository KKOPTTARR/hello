//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼����
//(ֻ���������������룬���������ȷ����ʾ��¼��
//������ξ�����������˳�����

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
	int count = 0;//���Դ���
START:
	count = try_count;
	while (count > 0)
	{
		printf("����������˺ţ�");
		scanf("%s", name);
		printf("������������룺");
		scanf("%s", password);

		/*printf("%s %s\n", name, password);*/

		if (strcmp(name, DEFUALT_NAME) == 0 && strcmp(password, DEFAULT_PASSWORD) == 0)
		{
			printf("��ӭ%s����\n", name);
			break;
		}
		else
		{
			count--;
			printf("��½ʧ��,�����˺Ż�����,�㻹ʣ%d�λ���\n",count);
		}
	}
	if (count == 0)
	{
		printf("��½ʧ�ܣ���60������ԣ�\n");
		int time = 1;
		while (time <= 60)
		{
			printf("���ϴε�¼�ѹ�...%ds\r", time);
			Sleep(100);
			time++;
		}
		printf("\n");
		goto START;
	}


	system("pause");
	return 0;
}


//goto���
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
//����ѭ��hello
//goto����������Ҳ����������



//cmd����
//�ػ���shutdown -s -t 180 (180s��ػ���
//������̣�osk
//��������calc

/*int main()
{
system("....");
return 0;
*/
//ͬ��������


//������ػ�����
/*int main()
{
	system("shutdowm -s -t 180");
	printf("����豸������180���رգ�������˵��������\n");
	char input[SIZE];

	while (1)
	{
		printf("input: ");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdowm -a");
			printf("�ػ�������ȡ��\n");
			break;
		}
		else
		{
			printf("�ش�����ٸ���һ�λ���\n");
		}
	}
	system("pause");
	return 0;
}*/



//dos �����ս
//telnet towel.blinkenlights.nl