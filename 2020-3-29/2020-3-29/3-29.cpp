#include <stdio.h>
#include<CoreWindow.h>
//"字符串"
//‘字符’
//想字面输出“或‘要加\
//注释一行
/*注释多行*/

int main()
{
	int arr[10] = {};//可自由更换数组个数及数组内容
	
	int num = sizeof(arr) / sizeof(arr[0]);//想怎么变就怎么变
	
	//遍历
	int i = 1;
	int total = 0;
	for (; i < num; i++)
	{
		printf("arr[%d]:%d\n", i, arr[i]);
		total = total + arr[i];
	}
	printf("total:%d\n", total);

	//移位
	int o = 17.89;
	printf("%d\n", o << 1);
	printf("%d\n", o >> 1);
	//  x>>1  右移一位  即x/2取整
	//  x<<1  左移一位  即x*2
	//x>>=1 即x=x>>1
	

	//操作符
	//按位与&
	//1&1=1，0&1=0，0&0=0，2&6=2

	//按位或|
	//1|1=1，1|0=1，0|0=0，2|6=7
	
	//按位异或^
	//1^1=0,1^0=1,0^0=0，2^6=4
	//相同为假，不同为真
	
	
	//2 --0010
	//6 --0110
	//& --0010
	//| --0111
	//^ --0100
	
	
	//~x取反码
	unsigned int x = 1;
	printf("%u\n", ~x);


	//前后置
	//i++  先使用，再自增
	//++i  先自增，再使用


	int y = 0;
	int m = 30;
	y == 0 && printf("ok!\n");
	y == 1 || printf("ok!\n");
	//若y==1，则ok！不输出
	//因为&&为y==0两边条件同时成立
	//因为||为一边条件成立即可

	//typedef unsigned long long   ull-t
	//关键字  老的类型              新的类型
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system ("pause");
	return 0;
}