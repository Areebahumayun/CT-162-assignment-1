#include<stdio.h>
int main()
{
	float celsius;
	float faherinheit;
	// allows user to enter temperature in celsius
	printf("Enter temperature in celsius:");
	scanf("%f",&celsius);
	//convert celsius into faherinheit using formula
	faherinheit=(celsius* 9 / 5 )+ 32;
	printf("%f celsius = %f faherinheit" , celsius,faherinheit);
	//for 100C=212F
	//for 0C =32F
	//for -40C=-40F
	return 0;
}
