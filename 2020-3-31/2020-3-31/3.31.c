#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
//#define Odd(x)((x)&1)

//�ж���ż
//����ֵ�� 0���񣩣�i���ǣ�

int isOdd(int _data)
{
	//�����
	//return _data & 1;
	//��λ��
	
	//return _data % 2;
	//����

	//return _data % 2 == 1;

	//return _data %2==1?1:0;
	
	int ret = (_data % 2 == 1 ? 1 : 0);
	//_dataģ2��1��
	//�ǣ����1��
	//���ǣ����0
	return ret;

	/*if (_data % 2 == 1)
	{
		return 1;
	}
	return 0;*/
}

int main()
{
	//�ж�һ�����ǲ�������
	printf("please enter your data: ");
	int data = 0;
	scanf("%d", &data);
	int ret = isOdd(data);
	if (0 == ret)
		//Ҳ����
		//int ret =isOdd��data��
		//if��!isOdd��data��
		//!ȡ��
		//ȥ��������·����ǡ��롰���ǡ���λ

	{
		printf("����");
	}
	else
	{
		printf("��");
	}


	printf("please enter your ��Χ: ");
	int start = 0;
	int end = 0;
	scanf("%d %d", &start, &end);
	//int ret = isOdd(data);
	for (; start <= end; start++)
	{
		if (isOdd(start))
		{
			printf("%d", start);
		}
		else
		{
			printf("����\n");
		}
	}
	printf("\n");






	//ѡ��
	int flag = 1;
	printf("�����룺\n");
	scanf("%d\n", &flag);
	if (flag == 1)
	{
		int x = 10;
		printf("%d\n", x);
	}
	int x = 20;
	printf("%d\n", x);

	//����if
	int a = 1;
	int b = 2;
	if (a == 1)
	{
		printf("������b��ֵ��\n");
		scanf("%d\n", &b);
		if (b == 2)
		{
			printf("a=1,b=2\n");
		}
		else
		{
			printf("hehe\n");
		}
	}

	//int day = 0;
	//printf("���������ڣ�\n");
	//scanf("%d\n", &day);
	//switch (day)
	//{
	//case 1:
	//	printf("һ\n");
	//		break;
	//case 2:
	//	printf("��\n");
	//	    break; 
	//case 3:
	//		printf("��\n");
	//		break;
	//default:
	//	printf("error!\n");
	//	break;
	//}


	//������
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n) //switch����Ƕ��ʹ��
		{
		case 1: n++;
		case 2: m++;
			n++; break;
			m++; break;
		}
	case 4:m++;
		break;
	default:
		break;
	}

	printf("m = %d, n = %d\n", m, n);
	
	
	system("pause");
	return 0;
	
}