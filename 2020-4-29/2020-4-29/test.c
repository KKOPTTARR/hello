#include<stdio.h>
#include<Windows.h>



//a++后缀自增
//若a++和++a在一块，先算a++


//->指向操作符

//*p++
//*++p
//均先++


// c + --c;
//上诉代码有问题

//int i =1;
//int ret = (++i) + (++i) + (++i);
//上诉代码同样有问题





int main()
{

	int a = 10;
	int *q = &a;
	printf("a: %p\n", &a);
	printf("*q: %p\n", q);
	//打印出结果同
	printf("*q: %p\n", q + 1);
	//打印出加4

	//对指针加一，实际上是对指针指向的类型的大小



	//如果某个操作符的各个操作数属于不同的类型
	//那么除非其中一个操作数的转换为另一个操作数的类型
	//否则操作就无法进行。下面的层次体系称为寻常算术转换。



	// 0x表示16进制
	/*char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;


	if (a == 0xb6)
	{
		printf("a");
	}
		
	if (b == 0xb600)
	{
		printf("b");
	}
	if (c == 0xb6000000)
	{
		printf("c");
	}
	printf("\n");*/

	
	
	//a,b要进行整形提升,但是c不需要整形提升 
	//a,b整形提升之后,变成了负数,
	//所以表达式 b==0xb600 的结果是假,
	//但是c不发生整形提升,
	//则表达式 c==0xb6000000 的结果是真.
    //程序输出的结果是:c

	system("pause");
	return 0;
}