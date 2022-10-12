#include<stdio.h>
int main()
{
	int a=2000,b=100,n=21,i,d;
	printf("Cost of the printer \t: %d",a);
	printf("\nDownpayment \t\t: %d",b);
	printf("\nNumber of months \t: %d",n);
	d=(n+1)*100;
	i=(d-a)*100/a;
	printf("\nInterest rate \t\t: %d",i);
	return 0;
}