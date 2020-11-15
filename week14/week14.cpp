#include<stdio.h>
void Fbmi(float*, float*, float*);

int main()
{
	float high , weight ;
	float bmi;
	printf("input your weight [kg.] : ");
	scanf_s("%f", &weight);
	printf("input your high [cm.] : ");
	scanf_s("%f", &high);

	high /= 100;
	Fbmi( &weight, &high, &bmi);

	printf("\n\nyour BMI = %.2f",bmi);
	if (bmi < 18.5)
	{
		printf(" (very thin)\n\n");
	}
	if (bmi >= 18.5 && bmi <= 22.90)
	{
		printf(" (good health)\n\n");
	}
	if (bmi > 22.90 && bmi <= 24.90)
	{
		printf(" (buxom Danger level 1)\n\n");
	}
	if (bmi > 24.90 && bmi <= 29.90)
	{
		printf(" (fat Danger level 2)\n\n");
	}
	if (bmi > 29.0)
	{
		printf(" (very fat Danger level 3!!)\n\n");
	}
	return 0;
}


void Fbmi(float* x, float* y,float* z)
{
	*z = *x / (*y * *y);
}