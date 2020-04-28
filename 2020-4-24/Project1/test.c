#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)

void Swap(int *xp, int *yp)
{
	//*xp == x;
	//*yp == y;
	*xp ^= *yp; //x ^= y;
	*yp ^= *xp; //y ^= x; // y = y ^ (x ^ y)
	*xp ^= *yp; //x ^= y; // x = (x ^ y) ^ x

	//int temp = *xp;
	//*xp = *yp;
	//*yp = temp;
}
int CountOne(int x)
{
	//int a = 10;
	//int y = 20;
	//float f = 3.14f;
	//double d = 1.234;
	//a = y;
	//y = a;
	//1后面跟几个零，就是2的几次方
	//199; //128 + 64 + 4 + 2 + 1
	//0000 0000 0000 0000 0000 0000 1100 0111
	//8 + 2;
	//2 ^ 3; //1000
	//2 ^ 1; //0010+
	//       //1010
	//x = 01000000000000000000
	//x &= (x-1);
	//00000100010001000  (x)(old)
	//00000100010000111  (x - 1) & x
	//------------------
	//00000100010000000   x (new)
	//00000100001111111 & (x - 1) & x
	//-----------------
	//00000100000000000
	//00000011111111111 & (x - 1) & x
	//-----------------
	//00000000000000000
	//code3
	//int count = 0;
	//while (x){
	//	x &= (x - 1);
	//	count++;
	//}
	//return count;

	//code2
	//int count = 0;
	//while (x){
	//	if (x % 2){
	//		count++;
	//	}
	//	x /= 2;
	//}
	//return count;
	//code1
	//int count = 0;
	//int i = 0;
	//while ( i < sizeof(x)*8){
	//	if (x & (1<<i)){
	//		count++;
	//	}
	//	i++;
	//}
	//return count;
	return 0;
}
int main()
{
	//char c = 'a';
	int a = (int)'a';
	//强转改变的是我们看待数据的方式
	//float f = 1.0;
	//int a = (int)f;
	char *str = "12345";
	int n = 12345;


	//char b = 0;
	//b = a;


	//int i = 10;
	////int x = ++i;
	//int x = i++;
	//printf("%d,%d\n", x, i);
	//sizeof(10);
	//char a[10];
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(a+1));
	//printf("%d\n", sizeof(a[1]));

	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof a); //sizeof不是函数
	//printf("%d\n", sizeof(10));
	//printf("%d\n", sizeof 10);
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof int);




	//int a = 10;
	////任何一个变量，站在3个角度去理解变量
	////1. 变量空间
	////2. 变量内容
	////3. 变量地址
	////printf("0x%p\n", &a);
	//int *p = NULL;
	//p = &a;
	//int *q = p;
	//int a = 10;
	//printf("%d\n", -a);
	//int x = 1;
	//printf("%d\n", ~x);
	//0000 0000 0000 0000 0000 0000 0000 0001
	//1111 1111 1111 1111 1111 1111 1111 1110
	//1111 1111 1111 1111 1111 1111 1111 1101
	//1000 0000 0000 0000 0000 0000 0000 0010

	//int x = 1;
	//if (!x){
	//	printf("hello world!\n");
	//}


	//a = a + 20;
	//a += 20;
	//a = a % 5;
	//a %= 5;
	//a &= 1;
	//a |= 1;
	//a ^= 1;
	//int a = 10;
	//int b = 20;
	//int c = 30;

	////不推荐
	//c = b = a + 40;

	////推荐
	//b = a + 40;
	//c = b;

	//printf("%d\n", a);
	//printf("%d\n", b);
	//printf("%d\n", c);







	//编写代码实现：求一个整数存储在内存中的二进制中1的个数。
	//int x = 10;
	//int num = CountOne(x);
	//printf("one : %d\n", num);
	//int x = 0;
	//int y = 0;
	//printf("请输入# ");
	//scanf("%d %d", &x, &y);
	//printf("before: %d, %d\n", x, y);
	//Swap(&x, &y);
	//printf("after: %d, %d\n", x, y);
	//^ : 相异为真，相同为假
	//printf("%d\n", 1 ^ 0); // 1
	//printf("%d\n", 0 ^ 1); // 1
	//printf("%d\n", 1 ^ 1); // 0
	//printf("%d\n", 0 ^ 0); // 0

	//int x = 10;
	//int y = 20;
	//printf("%d\n", x ^ y ^ y); //x ^ y ^ x ->0 ^ y; //0 ^ 0 = 0, 1^0=1
	//0000 0000 0000 0000 0000 0000 0000 1010
	//0000 0000 0000 0000 0000 0000 0001 0100 ^
	//------------------------------------------
	//0000 0000 0000 0000 0000 0000 0001 1110 (x ^ y)
	//0000 0000 0000 0000 0000 0000 0000 1010 ^(x)
	//---------------------------------------
	//0000 0000 0000 0000 0000 0000 0001 0100


	//int a = 2;
	//int b = 1;
	//printf("%d\n", 1 | 0);
	//printf("%d\n", 0 | 1);
	//printf("%d\n", 1 | 1);
	//printf("%d\n", 0 | 0);
	//printf("%d\n", 1 & 1);
	//x >> 1; //x / 2; x >>=1;x = x >> 1; x = x / 2;
	//int x = 100;
	//printf("%d\n", x >> 1);
	//printf("%d\n", x >> 2);
	//printf("%d\n", x >> 3);
	//printf("%d\n", x >> 4);
	///*int x = 1;
	//x << 1; // x * 2;
	//printf("%d\n", x << 1);
	//printf("%d\n", x << 2);
	//printf("%d\n", x << 3);
	//printf("%d\n", x << 4);*/

	//x << n or x >> n x（在内存）不变的,除非x = x << 1;
	//int x = 10;
	//x >> -1;
	//逻辑移位 左边用0填充，右边丢弃(无符号整数)
	//算术移位 左边用原该值的符号位填充，右边丢弃(有符号整数)
	//int x = -1;
	////原：1000 0000 0000 0000 0000 0000 0000 0001
	////反：1111 1111 1111 1111 1111 1111 1111 1110
	////补：1111 1111 1111 1111 1111 1111 1111 1111 >> 1
	//printf("%d\n", (unsigned int)x >> 1);
	// int a = 10;
	// a + 1; != a++.++a
	// a?
	//在理解运算的时候，要引入一个概念（CPU+寄存器）
	//char x = 10; // 0000 0000 0000 0000 0000 0000 0000 1010
	//x << 1;
	//printf("%u\n", x);
	////x << 1;     //0000 0000 0000 0000 0000 0000 0000 10100
	system("pause");
	return 0;
}