#include <stdio.h>
#include <windows.h>



//����
int main()
{
	int i = 100;
	int j = 200;
	while (i < j)
	{
		int k = 2;
		for (; k < i;k++)
		{
			if (i%k == 0)
			{
				break;
			}
		}
		if (k == i)
		{
			printf(" %d", k);
		}
		i++;
	}
	system("pause");
	return 0;
}









//����
//int deapyear(int i ,int j)
//{
//	for (; i < j; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//		}
//		if (i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return i;
//}
//int main()
//{
//	int n = 1000;
//	int m = 2000;
//	printf(" %d", deapyear(n, m));
//	system("pause");
//	return 0;
//}


//���Լ��
//int ComDiv(int x,int y)
//{
//	int i = 0;
//	if (x <= y)
//	{
//		i = y;
//	}
//	else
//	{
//		i = x;
//	}
//	while (i > 0)
//	{
//		if (x%i == 0 && y%i == 0)
//		{
//			break;
//		}
//		i--;
//	}
//	return i;
//}
//
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	printf("��������������\n");
//	scanf("%d %d", &n, &m);
//	printf("���Լ��Ϊ��%d", ComDiv(n, m));
//
//	system("pause");
//	return 0;
//}