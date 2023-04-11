#include<stdio.h>
int main()
{
	int a;
	int b;
	int temp;
	
	printf("Enter the value of A :- ");
	scanf("%d",&a);
	
	printf("Enter the value of B :- ");
	scanf("%d",&b);
	
	temp=a;
	a = b;
	b = temp;
	printf("After swapping : %d\n",a);
	printf("After swapping : %d\n",b);
	
	return 0;
}
