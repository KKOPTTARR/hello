#include<stdio.h>
#include<Windows.h>


//结构体

//定义一个结构体类型
//typedef struct Stu
//{
//	char name[20];//名字 
//	int age;//年龄
//	char sex[5];//性别 
//	char id[20];//学号
//}
//Stu;//分号不能丢




//重点：结构体传参  ！！


struct S {
	int data[1000];
	int num;
};
struct S s = { { 1, 2, 3, 4 }, 1000 };


//结构体传参
void print1(struct S s)
{
	printf("%d\n", s.num);
}


//结构体地址传参
void print2(struct S* ps) 
{
	printf("%d\n", ps->num);
}


//地址传比结构体传更高效

//int main() 
//{
//	print1(s); //传结构体 
//	print2(&s); //传地址 
//	
//	return 0;
//}



  struct Stu
{
	char name[20];//名字 
	int age;//年龄
	char sex;//性别 
	int score[5];
 };




//访问方式为 .
//即 stu1.name
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