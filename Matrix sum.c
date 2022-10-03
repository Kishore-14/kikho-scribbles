//matrix addition
#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,m,n;
	printf("Elements of first matrix :");
	printf("\nEnter the number of rows\t: ");
	scanf("%d",&m);
	printf("\nEnter the number of columns\t: ");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nEnter element %d%d : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nElements of second matrix :");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nEnter element %d%d : ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nThe sum matrix : ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("\nElement %d%d : %d",i+1,j+1,c[i][j]);
		}
	}
	return 0;
}