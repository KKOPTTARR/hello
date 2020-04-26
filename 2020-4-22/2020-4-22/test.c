#include<stdio.h>
#include<Windows.h>


//递归
//1+2+3+...+100
//(自己调用自己。。。)

int sum(int n)
{
	int m = 0;
	if (n == 1)
	{
		m = 1;
	}
	else
	{
		m = n + sum(n-1);
	}
	return (m);
}




int main()
{

	int i = 100;
	int j = 0;
	j = sum(i);
	printf("result: %d", j);



	system("pause");
	return 0;
}