#include<stdio.h>
#include<Windows.h>


#define SIZE 10

//取大
int Max(int a[], int num)
{
	int i = 0;
	int max = a[0];
	for (i = 1; i < num; i++){
		if (max < a[i]){
			max = a[i];
		}
	}
	return max;
}



int main()
{

	int a[SIZE] = { 0 };

	int i = 0;
	for (; i < SIZE; i++){
		scanf("%d", &a[i]);
	}

	int max = Max(a, SIZE);
	printf("max = %d\n", max);










	//1-100里有多少个数字9
	/*int x = 1;
	int y = 9;
	int count = 0;

	while (x <= 100)
	{
		if (x % 10 == 9)
		{
			printf(" %d", x);
			count++;
		}
		if (x % 10 == 0 && x % 9 == 0)
		{
			printf(" %d", x);
			count++;
		}
		x++;
	}
		count += 1;
		printf("\n");
		printf("共有%d个数\n", count);*/


		system("pause");
		return 0;
}