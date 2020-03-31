#include<stdio.h>
#include<windows.h>


//宏
//可用于文本替换等
//#define M 4321
//printf("%d\n",M);
//输出4321

//用宏定义（像函数）

//#define DOUBLE(x) x*x

//^^int double(int x);
//^^{
//^^return x*x;
//^^}
//^^(函数)

//int main()
//{

//^^	printf("%d\n",double(10)

//	printf("%d\n", DOUBLE(10);
//}

//注意，若DOUBLE((10+1))，则输出10+1*10+1
//若#define DOUBLE((x)*(x)),则输出121






	//static修饰局部变量只改变了变量的生命周期
    //让局部变量有想全局变量一样的生命周期
	//即在函数内定义只待函数内生效（只用一次并跟随变化）
    //例：
	void test()
	{
		int i = 0;
		//上定义隔行打印 10个0
		//static int i=0则打印出1~10
		i++;
		printf("%d ", i);
	}
int main()
{
		int i = 0;
		for (i = 0; i<10; i++)
		{
			test();
		}

	//static定义全局变量在该文件中无明显变化
	//在多文件中可隔空定义

        //若另一文件定义了函数，在原文件中也要声明（如下）
		//extern void 函数（）  《int main前》
	
		//但若此函数被static定义，则该函数只能在那个文件内调用
		//不能跨文件直接访问
		//意思是可以间接。。。


		printf("\n");

     	//char定义字符串
		//int定义数组
		char arr1[] = "i love u";
		int arr2[] = { 5, 2, 0 };
		int j;
		for (j= 0; j< 3; j++)
		{
			printf("%d", arr2[j]);
		}
		printf(" %s\n", arr1);

	

		//指针
		//提高查找效率，具指向性
		//内存中空间编号成地址
		int a = 10 ;
		int *p = &a;
		//p是一个变量，有开辟空间32.4字节
		//p指向a(p取a地址)
        //若是p=&a，则表示变量a的空间

		//对指针进行解引用，代表的是指针所指向的变量

	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}


