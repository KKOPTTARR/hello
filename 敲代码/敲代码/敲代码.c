#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("��Ը���ô�����0��ʾԸ�⣬1��ʾ��Ը��:\n");
	
	int choice = 0;
	
	scanf("%d", &choice);//&����ȡ��ַ����

	if (choice == 1)//==��ʾȡ���
		            //=��ʾ��ֵ
	{
		printf("����õ���offer��\n");
	}
	else
	{
		printf("�ؼ��������!\n");
	}
	return 0;
}