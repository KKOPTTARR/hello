#include "test.h"

//fib(5) = fib(4) + fib(3)
//
int count = 0;

int MyAdd(int x, int y)
{
	printf("Myadd running...\n");
	return x + y;
}
int fib(int n)
{
	//��������
	//int first = 1;
	//int second = 1;
	//int third = 1;

	//while (n > 2){
	//	third = first + second;
	//	first = second;
	//	second = third;
	//	n--;
	//}
	//return third;
	//�ݹ鷽��
	if (n == 1 || n == 2){
		return 1;
	}
	if (n == 3){
		count++;
	}
	return fib(n - 1) + fib(n - 2); //˫�ݹ飬�ظ�����
}

int Fact(int n)
{
	//code2
	//5! : 5*4!
	//4! : 4*3!
	//3! : 3*2!
	//2! : 2 * 1!
	//1! : 1
	if (n == 1){
		return 1;
	}
	return n * Fact(n - 1);

	//code1
	//n!-> 1*2...*n
	//int i = 1;
	//int total = 1;
	//for (; i <= n; i++){
	//	total *= i;
	//}
	//return total;
}

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
//���磺 ���룺1234����� 1 2 3 4.
//1234 % 10 = 4 -> 1234 /= 10 = 123
//123 % 10 = 3 -> 123 /= 10 = 12
//12 % 10 = 2 -> 12 /= 10 = 1
// 1 % 10 = 1 -> 1 /= 10 = 0
//1234 -> 1 2 3 4
//���Ҫ��ӡ����λ�����ǿ���ֱ�Ӵ�ӡ��(�ݹ����)
//1234->123->12->1:���»�С
//4, 123
//3, 12
//2, 1

void ShowInt(int x) //1234
{
	if (x > 9){
		ShowInt(x / 10); //1 2 3 4
	}
	//1. if����������
	//2. if�������㣬�����ڲ��������÷�����
	printf("%d ", x % 10);

	//code2
	//if (x < 10){
	//	printf("%d ", x);
	//	return;
	//}
	//ShowInt(x / 10);
	//printf(" %d ", x%10);

	//code1
	//int arr[64] = {0};
	//int i = 0;
	//while (x > 0){
	//	arr[i] = x % 10;
	//	x /= 10;
	//	i++;
	//}
	//while (i > 0){
	//	i--;
	//	printf("%d ", arr[i]);
	//}
	//printf("\n");
}