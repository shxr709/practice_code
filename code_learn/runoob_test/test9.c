/*************************************************************************
    > File Name: test9.c
    > Author: shxr709
    > Mail: shxr770099@outlook.com 
    > Created Time: Sat Aug 23 18:28:27 2025
 ************************************************************************/

#include<stdio.h>

int main()
{
	int i, j;
	for(i = 0; i < 8; i++)
	{
		for(j = 0; j < 8; j++)
		{
			if((i + j) % 2 == 0)
			{
				printf("%c%c", 219, 219);
			}else
			{
				printf(" ");
			}

		}	
		
		printf("\n");
	}

	return 0;
}
