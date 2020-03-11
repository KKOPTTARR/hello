//有1，2，3，4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

//分析：可排在百位、十位、个位的数字都是1234，组成所有排序后再去掉不满足条件的组合



#include<stdio.h>
int main()
{
	int i, j, k;
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			for (k = 1; k < 5;k++)
			if (i != j&&i != j != k)
			{
				printf("%d%d%d\n", i, j, k);
			}
		}
	}
	return 0;
}