#include <stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)


//int judge_num(int n)
//{
//	int i = 0;
//
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return -1;
//	}
//	return 0;
//}
   int leapyear(int year)
   {
	   int _year = 0;
	   if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	   {
		   _year = 1;
	   }
	   return year;
}



int main()
{
	int year = 0;
	int result = 0;
	printf("请输入年份：");
	scanf("%d",&year);

	result = leapyear(year);

	if (result == 0)
	{
		printf("%d是闰年\n", year);
	}
	else
	{
		printf("%d不是闰年\n", year);
	}

	








	/*int start = 100;
	int end = 200;

		while (start < end)
		{
			int result = judge_num(start);
			if (result == 0)
			{
				printf(" %d", start);
			}
			start++;
		}
*/

	system("pause");
	return 0;
}