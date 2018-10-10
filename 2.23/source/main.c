#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c, max, min;
	printf("input 3 number: ");
	scanf_s("%d%d%d", &a, &b, &c);
	max = a;
	min = a;
	if (b > max) 
		max=b;
	if (b < min)
	    min=b;
	if (c<min )
		min=c;
	if (c>max)
		max=c;
	printf("the biggest number is %d\n",max);
	printf("the smallest number is %d\n",min);
	system("pause");
	return 0;
	
	

	
}