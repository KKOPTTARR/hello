#include<stdio.h>
#include<windows.h>
#include<stible.h>
#pragma warning(disable:4996)



//show����
void Show(int a[][5], int n)
{
	for (int i = 0; i < n; i++)
	{
		int j = 0;
		for (; j < 5; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

//ָ����ʽ
void Show(int *a, int n)
{
	int i = 0;
	for (; i < n; i++)
	{
		printf("%d", a[i][j]);
	}
	printf("\n");
}

int main()
{
	int a = 10;

	int *p = &a;
	//p��������a�ĵ�ַ
	int **pp = &p;
	//����ָ����� ������*p�ĵ�ַ
	int ***ppp = &pp;
	//����ָ����� ������**pp�ĵ�ַ




	//ָ������ ������
	//int *arr[5]
	//�ڲ��ŵ�ȫ������int * 
	//����Ϊָ��


	int




		system("pause");
	return 0;
}