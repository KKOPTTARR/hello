#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("��Ը���ô�����? 1��ʾԸ�⣬0��ʾ��Ը�⣺\n");

	int choice;

	scanf("%d", &choice);

	if (choice == 1)//==��ʾ�Ƚ����
	                //=��ʾȡֵ
	{
		printf("����ҵ���offer��\n");
	}
	else{
		printf("�ؼ�������ɣ�\n");
	}
	return 0;
}