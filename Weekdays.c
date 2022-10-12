#include<stdio.h>
int main()
{ 	
	int i;
	char *a[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	printf("Enter the day : ");
	scanf("%d",&i);
	if(i<1 || i>7)
	{
		printf("\nEnter the number between (1-7)");
	}
	else
	{
		printf("\n%s",a[i-1]);
	}
	return 0;
}
