﻿#include <stdio.h>
#include<Windows.h>

void show()
{
	printf("hello show()\n");
}

int main()
{
	//1111 1111 + 1
	//1 0000 0000
	unsigned int i; //[0-x] >= 0;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
		Sleep(1000);
	}
	//int i = -20;
	å	//unsigned int j = 10;

		// 1000 0000 0000 0000 0000 0000 0001 0100
		// 1111 1111 1111 1111 1111 1111 1110 1011
		// 1111 1111 1111 1111 1111 1111 1110 1100 -20补码 //i：0x FF FF FF EC
		// 0000 0000 0000 0000 0000 0000 0000 1010 +       //j: 00x 00 00 00 0A
		//-----------------------------------------
		// 1111 1111 1111 1111 1111 1111 1111 0110 (-1,符号位不变，按位取反)
		// 1000 0000 0000 0000 0000 0000 0000 1001
		// 1000 0000 0000 0000 0000 0000 0000 1010 (用一种电路设计 原码<->补码)

		//printf("%d\n", i + j);









		//char a = -128; //[-128~127] : 1000 0000 (规定)
		//char a = 130;    //1000 0000
		//1 1000 0001
		//1 0111 1111
		//0111 1111
		//   unsigned char a = -129; 
		//printf("%d\n", a);  //0000 0001
		//是完全自洽的没错，但是，如果你放入的数据本身有越界的情况，那么就需要仔细分析了。
		//分析的结果是什么就是什么，基本上可能有规律可言，但是没有任何参考或者使用价值

		//1111 1111 1111 1111 1111 1111 1000 0000
		//1111 1111 1111 1111 1111 1111 0111 1111
		//1000 0000 0000 0000 0000 0000 1000 0000





		//1111 1111 1111 1111 1111 1111 1000 0000
		//1111 1111 1111 1111 1111 1111 1111 1111
		//0000 0000 0000 0000 0000 0000 0111 1111
		//2^32 - 1 - 127


		//char a = -1;
		//signed char b = -1;
		//unsigned char c = -1;
		////整形提升的时候，看的是自己的类型！！！
		//printf("a=%d,b=%u,c=%d", a, b, c);






		//0000 0000 0000 0000 0000 0000 0000 1010
		//0x0    0    0    0    0    0    0    A
		//0x00 00 00 0A
		//int a = 10; 
		//1000 0000 0000 0000 0000 0000 0000 1010
		//1111 1111 1111 1111 1111 1111 1111 0101
		//1111 1111 1111 1111 1111 1111 1111 0110
		//0x F    F    F    F    F    F    F    6
		//0x FF FF FF F6
		//   F6 FF FF FF
		/*int b = -10;*/

		//int x = 1;
		//printf("%d\n", *((char*)&x));
		//show();
		system("pause");
	    return 0;
}