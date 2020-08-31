#include<stdio.h>
#include<Windows.h>


//ÕûÐÎ
int cmp(const void *x, const void *y)   
{
	return (*(int*)x) - (*(int *)y);
}


//×Ö·û
int cmp1(const void *x, const  void *y)  // ×Ö·ûÐÍ
{
	return (*(char *)x) - (*(char *)y);
}


//×Ö·û´®
int cmp2(const void *x, const void *y)  
{
	return strcmp(*(char **)x, *(char **)y);
}


int main()
{
	int i = 0;

//ÕûÐÍ
	int arr1[] = { 1, 4, 36, 31, 37, 2, 0};
	qsort(arr1, sizeof(arr1) / sizeof(arr1[0]), sizeof(arr1[0]), cmp);
	for (i = 0; i<sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");


//×Ö·û
	char arr2[] = { 'a', 'c', 'A','T','b' };
	qsort(arr2, sizeof(arr2) / sizeof(arr2[0]), sizeof(arr2[0]), cmp1);
	for (i = 0; i<sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		printf("%c ", arr2[i]);
	}
	printf("\n");


//×Ö·û´®
	char *str[] = {  "aa", "bb","zz","YYYYY" };
	qsort(str, sizeof(str) / sizeof(*str), sizeof(*str), cmp2);
	for (i = 0; i < sizeof(str) / sizeof(*str); i++)
	{
		printf("%s ", str[i]);
	}
	printf("\n");



	system("pause");
	return 0;
}