//实现qsort

#include <stdio.h>
#include <windows.h>

//先比较
int compare(const void *p1, const void *p2)
{
	return (*(int *)p2)<*((int *)p1);
}

//后交换
void _swap(void *pp1, void *pp2, int size)
{
	int i = 0;
	for (i = 0; i<size; i++)
	{
		char tmp = *((char *)pp1 + i);
		*((char *)pp1 + i) = *((char *)pp2 + i);
		*((char *)pp2 + i) = tmp;
	}
}

//建函数
void my_qsort(void *base, size_t count, size_t width, int(*cmp)(const void *e1, const void *e2))
{
	int i = 0;
	int j = 0; 

	for (i = 0; i<count; i++)
	{
		for (j = 0; j<count - 1 - i; j++)
		{
			if (cmp((char *)base + j*width, (char *)base + (j + 1)*width)>0) //如果条件满足使用者提供的比较条件，交换元素位置
			{
				_swap((char *)base + j*width, (char *)base + (j + 1)*width, width);
			}
		}
	}
}

int main()
{
	int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0;
	my_qsort(a, sizeof(a) / sizeof(a[0]), sizeof(int), compare);
	for (i = 0; i<sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%d ", a[i]);
	}

	system("pause");
	return 0;
}