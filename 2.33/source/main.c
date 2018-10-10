#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c, d, e, f=0 ;
	printf("input total distance by day(kilometers):");
	scanf_s("%d", &a);
	printf("input cost by gas:");
	scanf_s("%d", &b);
	printf("input distance by single gas:");
	scanf_s("%d", &c);
	printf("input parking fee:");
	scanf_s("%d", &d);
	printf("input passing fee:");
	scanf_s("%d", &e);
	if (a / c < 1)
		f += b;
	else f += (a / c)*b;
	f += d + e;
	printf("The cost of one day is %d\n", f);
	system("pause");
	return 0;
}