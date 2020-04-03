#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>



//求n阶阶乘(函数)
int Mul(int n)
{
	printf("%d!=", n);
		int result =1 ;//累加可零，累乘为一
	for (; n > 0; n--)
	{
		if (n == 1)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d*", n);
		}
		result *= n;//result=result*n
	}
	printf("=%d\n", result);
	return result;
}



//折半查找(函数)
int binsearch(int a[],int num,int x)
{
	int start = 0;
	int end = num - 1;
	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (x < a[mid])
		{
			//左半
			end = mid - 1;
		}
		else if (x>a[mid])
		{
			//右半
			start = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}


int main()
{


    //阶乘
	printf("请输入你要求的阶乘：");
	int n = 0;
	scanf("%d", &n);
	printf("result=:%d\n",Mul(n) );



	//折半查找
	int a[] = { 12, 13, 14, 15, 16, 17, 18, 19 };
	int num = sizeof(a) / sizeof(a[0]);
	int x = 0;
	printf("请输入你要查找的数据: ");
	scanf("%d", &x);
	int index = binsearch(a, num, x);
	printf("result=%d\n", index);



	//编写代码，演示多个字符从两端移动，向中间汇聚
		char arr1[] = "welcome to bit..."; 
		char arr2[] = "#################"; 
		int left = 0;
		int right = strlen(arr1) - 1; printf("%s\n", arr2); //while循环实现
		while (left <= right)
		{
			Sleep(1000);
			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			left++;
			right--;
			Sleep(1000);
			printf("%s\n", arr2);
		}
		
		//for循环实现
		/*for (left = 0, right = strlen(arr1) - 1;
			left <= right;
			left++, right--)
		{
			Sleep(1000);
			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			printf("%s\n", target);
		}*/



	//while循环
	int i = 1;
	while (i < 10)
	{
		if (i == 5)
		{
			printf("跳出循环：%d\n", i);
			break;
		}
		printf("%d\n", i);
			i++;
	}
	printf("while end:%d\n", i);



	//break 跳出所有循环
	//continue 跳出当前循环


	//面试题
	int j = 0;
	int k = 0;
	for (j = 0, k = 0; k = 0; j++, k++)
		k++;
	printf("%d\n", k);
	//输出结果为0
	//因为k=0已赋值
	
	
//前闭后开的写法 for(i=0; i<10; i++) {}
//两边都是闭区间 for(i=0; i<=9; i++) {}














	//getchar 从键盘抓取字符
	//putchar 在屏幕显示字符
	// cr + z  表示输入完毕
	int c = 0;
	while ((c = getchar()) != EOF)
	{
	}
		putchar(c);


	system("pause");
	return 0;
}