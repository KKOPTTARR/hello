#include<stdio.h>
#include<Windows.h>

	int MyStrlen(char *str)
	{
		if (NULL == str)
		{
			return 0;
		}


		char *start = str;
		char *end = str;
		while (*end != '\0')
		{ 
			//	char *str = "helloworld";
			end++;
		}
		return end - start;
	}

	//#define N_VALUES 5
	//float values[N_VALUES];
	//float *vp = NULL;

	void show(int *a, int n)
	{
		int i = 0;
		for (; i < n; i++)
		{
			printf("%d ", a[i]);
		}
		printf("\n");
	}


	int main()
	{
		int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
		int num = sizeof(a) / sizeof(a[0]);
		show(a, num);
		int *p = a;
		int i = 0;
		for (; i < num; i++)
		{
			//printf("%d ", a[i]);
			//printf("%d ", *(a + i));
			//printf("%d ", *(p + i));
			//printf("%d ", p[i]);
		}
		printf("\n");


		//int a[5];
		//int *p = a;
		//int *q = &a[5]; //[)
		//printf("%d\n", q - p);
		//指针+-整数；指针的关系运算,[),[]
		//[1,10)
		//[1,9]
		//for (vp = &values[0]; vp < &values[N_VALUES];)
		//{
		//	*vp++ = 1.0;
		//}
		//for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
		//{
		//	*vp = 0;
		//}

		//int a = 10;
		//int b = 20;
		//int *p = &a;
		//int *q = &b;
		//printf("%d\n", q - p);
		//int a[10];
		//char *p = (char*)a;
		//int *q = &a[9];
		//printf("%d\n", q - p);
		//char *str = "helloworld";
		//int len = MyStrlen(str);
		//printf("%d\n", len);

		//int a[5] = { 1, 2, 3, 4, 5 };
		//int *p = a; //&a[0]
		//int i = 0;
		//for (; i <= 5000; i++){
		//	*p++ = 0x11223344;
		//}
		//int a = 0x11111111;
		//int b = 0x22222222;
		//printf("%p\n", &a);
		//printf("%p\n", &b);
		//a = (char)b;
		//int x = 0x11223344; //大小端
		//char *pc = (char*)&x;
		//int *pi = &x;

		//printf("%p\n", &x);
		//printf("%p\n", pc);
		//printf("%p\n", pi);

		//*pc = 0;
		//*pi = 0;
	
	
	
	
	
	system("pause");
	return 0;

}