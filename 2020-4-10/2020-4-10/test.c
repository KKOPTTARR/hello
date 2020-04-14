#include<stdio.h>
#include<Windows.h>


//取大
/*int getmax(int x,int y)
{
	int z = x > y ? x : y;//重要
	return x;
}*/

//也可直接
//return x > y ? x : y;



//交换
void Swap(int *_x,int *_y)//！！！！！！此为指针
{
	int temp = *_x;
	*_x = *_y;
	*_y = temp;
}

int main()
{
	int x = 10;
	int y = 20;
	printf("before %d %d", x, y);
	Swap(&x, &y);//！！！！！！！！取地址
	printf("after %d %d", x, y);
}
//此为传址传参
//注意注意注意！！！

//只要传址传参，一定形成临时变量！！！！

//注意这里用void 无返回值

