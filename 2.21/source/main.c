#include<stdio.h>
#include<stdlib.h>
int main(void)
{
//方形
	for (int i = 0; i < 9; i++) 
	{
		for (int j = 0; j < 9; j++) 
		{
			if (i == 0 || i == 8)
				printf("*");
			else 
			{
				if (j == 0 || j == 8)
					printf("*");
				else 
					printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
//圓形
	for (int i = 0; i < 9; i++) 
	{
		for (int j = 0; j < 9; j++) 
		{
			if (i == 0 || i == 8)
			{
				if (j == 3 || j == 4 || j == 5)
					printf("*");
				else
					printf(" ");
			}
			else if (i == 1 || i == 7)
			{
				if (j == 1 || j == 7)
					printf("*");
				else
					printf(" ");
			}
			else 
			{
				if (j == 0 || j == 8)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
//傘型
	for (int i = 0; i < 9; i++) 
	{
		for (int j = 0; j < 5; j++) 
		{
			if (i == 0) 
			{
				if (j == 2)
					printf("*");
				else
					printf(" ");
			}
			else if (i == 1) 
			{
				if (j == 1 || j == 2 || j == 3)
					printf("*");
				else
					printf(" ");
			}
			else if (i == 2) 
			{
				printf("*");
			}
			else 
			{
				if (j == 2)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
//菱形
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (i == 0 || i == 8)
			{
				if (j == 4)
					printf("*");
				else
					printf(" ");
			}
			else if (i == 1 || i == 7)
			{
				if (j == 3 || j == 5)
					printf("*");
				else
					printf(" ");
			}
			else if (i == 2 || i == 6)
			{
				if (j == 2 || j == 6)
					printf("*");
				else
					printf(" ");
			}
			else if (i == 3 || i == 5)
			{
				if (j == 1 || j == 7)
					printf("*");
				else
					printf(" ");
			}
			else
			{
				if (j == 0 || j == 8)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
    }
	printf("\n");
	system("pause");
	return 0;
}