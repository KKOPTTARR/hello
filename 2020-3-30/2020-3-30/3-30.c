#include<stdio.h>
#include<windows.h>


//��
//�������ı��滻��
//#define M 4321
//printf("%d\n",M);
//���4321

//�ú궨�壨������

//#define DOUBLE(x) x*x

//^^int double(int x);
//^^{
//^^return x*x;
//^^}
//^^(����)

//int main()
//{

//^^	printf("%d\n",double(10)

//	printf("%d\n", DOUBLE(10);
//}

//ע�⣬��DOUBLE((10+1))�������10+1*10+1
//��#define DOUBLE((x)*(x)),�����121






	//static���ξֲ�����ֻ�ı��˱�������������
    //�þֲ���������ȫ�ֱ���һ������������
	//���ں����ڶ���ֻ����������Ч��ֻ��һ�β�����仯��
    //����
	void test()
	{
		int i = 0;
		//�϶�����д�ӡ 10��0
		//static int i=0���ӡ��1~10
		i++;
		printf("%d ", i);
	}
int main()
{
		int i = 0;
		for (i = 0; i<10; i++)
		{
			test();
		}

	//static����ȫ�ֱ����ڸ��ļ��������Ա仯
	//�ڶ��ļ��пɸ��ն���

        //����һ�ļ������˺�������ԭ�ļ���ҲҪ���������£�
		//extern void ��������  ��int mainǰ��
	
		//�����˺�����static���壬��ú���ֻ�����Ǹ��ļ��ڵ���
		//���ܿ��ļ�ֱ�ӷ���
		//��˼�ǿ��Լ�ӡ�����


		printf("\n");

     	//char�����ַ���
		//int��������
		char arr1[] = "i love u";
		int arr2[] = { 5, 2, 0 };
		int j;
		for (j= 0; j< 3; j++)
		{
			printf("%d", arr2[j]);
		}
		printf(" %s\n", arr1);

	

		//ָ��
		//��߲���Ч�ʣ���ָ����
		//�ڴ��пռ��ųɵ�ַ
		int a = 10 ;
		int *p = &a;
		//p��һ���������п��ٿռ�32.4�ֽ�
		//pָ��a(pȡa��ַ)
        //����p=&a�����ʾ����a�Ŀռ�

		//��ָ����н����ã���������ָ����ָ��ı���

	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}

