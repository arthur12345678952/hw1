#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	printf("input an integer:");
	scanf_s("%d", &a);
	if (a % 2 == 0)
		printf("%d is an even number\n", a);
	else
		printf("%d is an odd number\n", a);
	system("pause");
	return 0;
}