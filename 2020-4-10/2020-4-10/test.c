#include<stdio.h>
#include<Windows.h>


//ȡ��
/*int getmax(int x,int y)
{
	int z = x > y ? x : y;//��Ҫ
	return x;
}*/

//Ҳ��ֱ��
//return x > y ? x : y;



//����
void Swap(int *_x,int *_y)//��������������Ϊָ��
{
	int temp = *_x;
	*_x = *_y;
	*_y = temp;
}

int main()
{
	int x = 10;
	int y = 20;
	printf("before %d %d", x, y);
	Swap(&x, &y);//����������������ȡ��ַ
	printf("after %d %d", x, y);
}
//��Ϊ��ַ����
//ע��ע��ע�⣡����

//ֻҪ��ַ���Σ�һ���γ���ʱ������������

//ע��������void �޷���ֵ

