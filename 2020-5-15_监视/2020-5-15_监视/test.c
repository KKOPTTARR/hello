#include <stdio.h>
#include <assert.h>
#include <windows.h>

void show1()
{
	printf("haha\n");
}

void show()
{
	printf("hehe\n");
	printf("hehe\n");
	printf("hehe\n");
	show1();
}
#pragma warning(disable:4996)

//³����or��׳��
void Inc(int *p)
{
	//assert(p != NULL);
	//if (NULL == p){
	//	return;
	//}
	//*p += 10;	
}

int main()
{
	int a = 10;
	//const int *p = &a; //const ����*��������ͨ����ָ�룬��ָ���Ŀ������޸ģ�
	//a = 20;
	//*p = 20;
	//int const *p = &a; //const ����*��������ͨ����ָ�룬��ָ���Ŀ������޸ģ�
	//int *const p = &a;   //const ���ε���ָ��[����],ָ��������ܱ��޸ģ�Ҳ����p��ָ���ܱ�

	const int * const p = &a;
	p = 20;













	//	const int a = 10;
	//	const int *p = (int*)&a;
	////	*p = 20;
	//	const char *s = "hello world";
	//	//*s = 'H';
	/*int *p = &a;*/
	//printf("before: %d\n", a);
	//Inc(NULL);
	//printf("after : %d\n", a);
	//int i = 0;
	//int arr[10] = { 0 };
	//for (i = 0; i <= 12; i++)
	//{
	//	arr[i] = 0;
	//	printf("hehe\n");
	//}
	//int i = 0;
	//int sum = 0;//�������ս��
	//int n = 0;
	//int ret = 1;//����n�Ľ׳�
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
	//	int j = 0;
	//	ret = 1;
	//	for (j = 1; j <= i; j++)
	//	{
	//		ret *= j;
	//	}
	//	sum += ret;
	//}
	//printf("%d\n", sum);
	//F5 or ctrl F5 or shift F5 or F9 or F10 or F11
	//int i = 0;
	//int arr[10] = { 0 };
	//
	//for (i = 0; i <10; i++)
	//{
	//	arr[i] = 0;
	//	show();
	//}
	//printf("%p, %p\n", &i, arr);



	system("pause");
	return 0;
}