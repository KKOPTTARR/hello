#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "bit";
	char arr2[] = { 'b', 'i', 't' };
	char arr3[] = { 'b', 'i', 't', '\0' };

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);


	//strlen(��ʾ����-������0��
	//sizeof����ʾ�ռ�-����0��

	printf("%d\n", strlen("abcdef"));
	//���6
	printf("%d\n", strlen("c:\test\328\test.c"));
	//���14
	//c ��\t e s t \32 8 \t e s t . c


	//ѡ�����

	int select = 0;
	printf("���������ѡ��<1 or 2>");
	scanf("%d", &select);
	if (1 == select)//���ɣ�ȡ������д���
	{
		printf("OK!\n");
	}
	else if (2 == select)
	{
		printf("ok!\n");
	}
	else
	{
		printf("aaa\n");
	}


	//ѭ�����

	//while
	int i = 1;
	while (i < 10)
	{

		printf("%d\n", i);
		i = i + 1;
		//i+=1
		//i++��˼ͬ��
		//sleep(1000)�ӻ��������
	}


	//for
	int a = 0;
	for (; a < 10; a++)//!!!ע��ֺ�λ��
	{
		printf("%d\n", a);

	}
	
	

	//����
	
	int MyMul(int _x, int _y);//��ȥ_
	{
		int x = 0;
		int y = 0;
		printf("������������x��y");
		scanf("%d %d", &x, &y);
		int z = x * y;
		return z;

	}
	//���
	//int main����
	//{
		//int seslut=MyMull()

//}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}