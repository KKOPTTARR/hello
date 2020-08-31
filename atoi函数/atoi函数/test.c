#include <stdio.h>
#include<windows.h>
#include <stdlib.h>

int atoi(const char *str)
{
	int flag = 1;
	int result = 0;

	if (str == NULL)
		return 0;
	while (*str == ' ' || *str == '\t')
		str++;

	if (*str == '-')
	{
		flag = -1;
		str++;
	}

	while (*str != '\0')
	{
		if (*str >= 0 && *str <= '9')
			result = result * 10 + (*str - '0');

		else
		{
			break;
		}

		str++;
	}

	return result * flag;
}

int main()
{
	char *s1 = "1a2b3c";
	
	printf("result = %d\n", myatoi(s1));
	



	system("pause");
	return 0;
}