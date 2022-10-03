//Split amount in terms of rupess
#include<stdio.h>
int main()
{
	int a,i,b,c[10]={2000,500,200,100,50,20,10,5,2,1};
	printf("Enter the amount : ");
	scanf("%d",&a);
	for(i=0;i<11;i++)
	{
		if(a>=c[i])
		{
			b=a/c[i];
			printf("\nNumber of %d(s) : %d",c[i],b);
			a=a-(b*c[i]);
		}
	}
	return 0;
}