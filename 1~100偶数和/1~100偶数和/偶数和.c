//��1-100֮���ż����
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//����ԭ��
int calcSum(); //��1-100֮���ż����

int calcSum()
{
	//1-100֮���ż����
	int sum = 0;
	int i = 1;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{

			// sum++;
			sum += i;
		}
	}
	//������õĽ������
	return sum;
}

int main()
{
	//��������з���ֵ������ʱ���ǵ�ʹ�ö�Ӧ���͵ı��������գ�
	int sum = calcSum();
	printf("1-100֮���ż����Ϊ: %d\n", sum);
	return 0;
}
