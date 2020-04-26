#include<stdio.h>
#include<Windows.h>

//打印整数二进制奇数位和偶数位

void Print(int _n)
{
	int _m = 30;
	for (; _m>=0; _m -= 2)
	{
		printf(" %d", _n&(1 << _m));
	}
	printf("\n");

	for (_m = 31; _m >=0 ; _m -= 2)
	{
		printf(" %d", _n&(1 << _m));

	}
}
int main()
{
	int n = 111;
	Print(n);



	system("pause");
	return 0;
}




////二进制不同位个数
//
//int Num(int _i)
//{
//	int _num = 0;
//	while (_i)
//	{
//		_i &= (_i - 1);
//		_num++;
//	}
//	return _num;
//}
//
//int Different(int _n,int _m)
//{
//	return Num(_n^_m);
//}
//
//int main()
//{
//	int n = 111;
//	int m = 211;
//
//	int result = Different(n, m);
//	printf(" %d\n", result);
//
//	system("pause");
//	return 0;
//}