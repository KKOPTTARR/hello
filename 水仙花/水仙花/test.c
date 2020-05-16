#include <stdio.h>
#include<windows.h>

int main()
{
	int i = 100, a, b, c;
	for (; i<1000; i++)
	{
		a = i / 100;
		b = i % 100 / 10;
		c = i % 10;
		if (i == a*a*a + b*b*b + c*c*c)
			printf("%d\n", i);
	}


	system("pause");
	return 0;
}
