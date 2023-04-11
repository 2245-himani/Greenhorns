#include<stdio.h>
int main()
{
	int gross,basic,da,ta,hra;
	
	printf("Enter basic salary : ");
	scanf("%d",&basic);
	
	da=(5*basic)/100;
	ta=(8*basic)/100;
	hra=(10*basic)/100;
	gross = basic + da + ta + hra;
	
	printf("\n Gross salary : %d",gross);
}
