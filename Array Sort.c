#include<stdio.h>
int main()
{
	int a[10],b[10],i,j,t,n,n1,l;
	printf("\nEnter the size of a : ");
	scanf("%d",&n);
	printf("\nEnter the size of b : ");
	scanf("%d",&n1);
	if(n!=n1)
	{
		printf("\nThe given arrays are not same");
	}
	printf("\nEnter the elements of first array !\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the element %d : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the elements of second array !\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the element %d : ",i+1);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[i]>b[j])
			{
				l=b[i];
				b[i]=b[j];
				b[j]=l;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		{
			printf("\nThe given arrays are not same");
			break;
		}
		else if(a[i]==b[i])
		{
			printf("\nThe given arrays are same");
			break;
		}
	}
	return 0;
}