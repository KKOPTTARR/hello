#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("��Ը���ô�����1��ʾԸ�⣬0��ʾ��Ը�⣺");
	
	int choice = 0;

	scanf("%d", &choice);
	//&����ȡ��ַ����
	
	if (choice == 1)
	{
		printf("����õ���offer��\n");
	}
	else
	{
		printf("�ؼ�������ɣ�\n");
	}
	return 0;

}