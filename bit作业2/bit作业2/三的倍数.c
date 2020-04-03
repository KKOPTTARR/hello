#include <stdio.h>
#include <windows.h>

int MultOfThree()
{
	int x = 0;
	for (; x <= 100; x++)
	{
		if (x % 3 == 0)
		{
			printf(" %d ", x);
		}
	}
	return x;
}
int main()
{
	
	printf("%d", MultOfThree());
	system("pause");
	return 0;
}