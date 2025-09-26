#include<stdio.h>
int main()
{
	int temperature;
	//Allows user to enter temperature
	printf("Enter temperature:");
	scanf("%d",&temperature);
	//if temp greater than 30 then print weather is hot
	if (temperature >= 30){
		printf("Weather is hot");
	}
	return 0;

}