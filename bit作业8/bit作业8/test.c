#include <stdio.h>
#include<windows.h>

//��ӡ��������1����
int CountOne(int i)
{
	int count = 0;
	while (n != 0)
	{
		count++;
		n = n&(n - 1);
	}
	return count;
}





//��������������ʱ������
int main()
{
	int a = 1;
	int b = 2;
	printf("ԭ a��%d b��%d\n", a, b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("�� a��%d b��%d\n", a, b);




	return 0;
}