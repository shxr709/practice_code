/*************************************************************************
    > File Name: test8.c
    > Author: shxr709
    > Mail: shxr770099@outlook.com 
    > Created Time: 2025年08月12日 星期二 05时19分49秒
 ************************************************************************/

#include<stdio.h>

int main()
{
	int i, j, result;

	for(i = 1; i < 10; i++)
	{
		for(j = 1; j <= i; j++)
		{
			result = i * j;
			printf("%d*%d=%-3d", i, j, result);
		}
		printf("\n");
	}

	return 0;
}
