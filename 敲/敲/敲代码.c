#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("��Ը���ô�����0��ʾԸ�⣬1��ʾ��Ը�⣺\n");

	int choice = 1;

	scanf("%d", &choice);//&����ȡ��ַ����

	if (choice == 1)//==��ʾ�Ƚ����
		            //=��ʾ��ֵ
	{
		printf("����õ��ù�����\n");
	}
	else
	{
		printf("�ؼ�������ɣ�\n");
	}
	
	return 0;
}