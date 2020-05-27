#include<stdio.h>
#include<Windows.h>

int main()
{
	int i = 0; 
	int j = 0;
	int n = 10;//ÐÐÊý
	
	int a[10][10] = {0,1};


	for (i = 1; i < n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}


