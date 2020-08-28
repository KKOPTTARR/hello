
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<windows.h>
#include <assert.h>


char* MyStrncat(char* dest, char* src, int size)
{
	assert(NULL != dest && NULL != src);

	char* ret = dest;

	while (*dest)
	{
		*dest++;
	}

	while (size && *src)
	{
		*dest++ = *src++;
		size--;
	}
	return ret;
}

int main()
{
	char arr1[10] = "ni";
	char arr2[10] = " hao";
	
	printf("%s", MyStrncat(arr1, arr2, 5));
	
	
	system("pause");
	return 0;
}

