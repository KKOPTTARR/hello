#include<stdio.h>
#include<Windows.h>


//�ṹ��

//����һ���ṹ������
//typedef struct Stu
//{
//	char name[20];//���� 
//	int age;//����
//	char sex[5];//�Ա� 
//	char id[20];//ѧ��
//}
//Stu;//�ֺŲ��ܶ�




//�ص㣺�ṹ�崫��  ����


struct S {
	int data[1000];
	int num;
};
struct S s = { { 1, 2, 3, 4 }, 1000 };


//�ṹ�崫��
void print1(struct S s)
{
	printf("%d\n", s.num);
}


//�ṹ���ַ����
void print2(struct S* ps) 
{
	printf("%d\n", ps->num);
}


//��ַ���Ƚṹ�崫����Ч

//int main() 
//{
//	print1(s); //���ṹ�� 
//	print2(&s); //����ַ 
//	
//	return 0;
//}



  struct Stu
{
	char name[20];//���� 
	int age;//����
	char sex;//�Ա� 
	int score[5];
 };




//���ʷ�ʽΪ .
//�� stu1.name
//printf("name=: %s\n", stu1.name)

int main()
{
	struct Stu stu1 = { "tom", 21, 'm', { 90, 92 } };

	printf("name=: %s\n", stu1.name);
	printf("age=: %d\n", stu1.age);

	int num = sizeof(stu1.score) / sizeof(stu1.score[0]);

	int i = 0;
	for (; i < num; i++)
	{
		printf(" %d : %d\n", i, stu1.score[i]);
	}


	system("pause");
	return 0;
}