#include <stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)


//สýื้
int main() {
	int arr[3][4];
	int i = 0;
	for (i = 0; i<3; i++)
	{
		int j = 0;
		for (j = 0; j<4; j++)
		{
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
	}
	return 0;
}