#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>



//��n�׽׳�(����)
int Mul(int n)
{
	printf("%d!=", n);
		int result =1 ;//�ۼӿ��㣬�۳�Ϊһ
	for (; n > 0; n--)
	{
		if (n == 1)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d*", n);
		}
		result *= n;//result=result*n
	}
	printf("=%d\n", result);
	return result;
}



//�۰����(����)
int binsearch(int a[],int num,int x)
{
	int start = 0;
	int end = num - 1;
	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (x < a[mid])
		{
			//���
			end = mid - 1;
		}
		else if (x>a[mid])
		{
			//�Ұ�
			start = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}


int main()
{


    //�׳�
	printf("��������Ҫ��Ľ׳ˣ�");
	int n = 0;
	scanf("%d", &n);
	printf("result=:%d\n",Mul(n) );



	//�۰����
	int a[] = { 12, 13, 14, 15, 16, 17, 18, 19 };
	int num = sizeof(a) / sizeof(a[0]);
	int x = 0;
	printf("��������Ҫ���ҵ�����: ");
	scanf("%d", &x);
	int index = binsearch(a, num, x);
	printf("result=%d\n", index);



	//��д���룬��ʾ����ַ��������ƶ������м���
		char arr1[] = "welcome to bit..."; 
		char arr2[] = "#################"; 
		int left = 0;
		int right = strlen(arr1) - 1; printf("%s\n", arr2); //whileѭ��ʵ��
		while (left <= right)
		{
			Sleep(1000);
			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			left++;
			right--;
			Sleep(1000);
			printf("%s\n", arr2);
		}
		
		//forѭ��ʵ��
		/*for (left = 0, right = strlen(arr1) - 1;
			left <= right;
			left++, right--)
		{
			Sleep(1000);
			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			printf("%s\n", target);
		}*/



	//whileѭ��
	int i = 1;
	while (i < 10)
	{
		if (i == 5)
		{
			printf("����ѭ����%d\n", i);
			break;
		}
		printf("%d\n", i);
			i++;
	}
	printf("while end:%d\n", i);



	//break ��������ѭ��
	//continue ������ǰѭ��


	//������
	int j = 0;
	int k = 0;
	for (j = 0, k = 0; k = 0; j++, k++)
		k++;
	printf("%d\n", k);
	//������Ϊ0
	//��Ϊk=0�Ѹ�ֵ
	
	
//ǰ�պ󿪵�д�� for(i=0; i<10; i++) {}
//���߶��Ǳ����� for(i=0; i<=9; i++) {}














	//getchar �Ӽ���ץȡ�ַ�
	//putchar ����Ļ��ʾ�ַ�
	// cr + z  ��ʾ�������
	int c = 0;
	while ((c = getchar()) != EOF)
	{
	}
		putchar(c);


	system("pause");
	return 0;
}