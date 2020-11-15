#include<stdio.h>
void Fbmi(float*, float*, float*);

int main()
{
	float data[5] ;
	//1 weight 2 high 3 bmi
	printf("input your weight [kg.] : ");
	scanf_s("%f", &data[1]);
	printf("input your high [cm.] : ");
	scanf_s("%f", &data[2]);

	data[2] /= 100;
	Fbmi( &data[1], &data[2], &data[3]);

	printf("\n\nyour BMI = %.2f", data[3]);
	if (data[3] < 18.5)
	{
		printf(" (very thin)\n\n");
	}
	if (data[3] >= 18.5 && data[3] <= 22.90)
	{
		printf(" (good health)\n\n");
	}
	if (data[3] > 22.90 && data[3] <= 24.90)
	{
		printf(" (buxom Danger level 1)\n\n");
	}
	if (data[3] > 24.90 && data[3] <= 29.90)
	{
		printf(" (fat Danger level 2)\n\n");
	}
	if (data[3] > 29.0)
	{
		printf(" (very fat Danger level 3!!)\n\n");
	}
	return 0;
}


void Fbmi(float* x, float* y,float* z)
{
	*z = *x / (*y * *y);
}