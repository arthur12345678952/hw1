#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float i,j,k;
	printf("input your height(meter):");
	scanf_s("%f", &i);
	printf("input your weight(kg):");
	scanf_s("%f", &j);
	k = j / (i*i);
	printf("BMI:%f \n", k);
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:       30 or greater\n");
	system("pause");
	return 0;
}