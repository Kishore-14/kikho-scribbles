#include<stdio.h>
int main()
{	
	printf("To check\n1.All diagonal elements are postive"
	"\n");
	int i,j,m,n,a[10][10];
	printf("\nEnter the number of rows and columns : ");
	scanf("%d%d",&m,&n);
	if(m!=n)
	{
		printf("\nEnter the valid inputs : ");
		scanf("%d%d",&m,&n);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nElement %d%d : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		if(a[i][i]<0)
		printf("\nAll diagonals are not positive");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{	
			if(i!=j)
			{
				if(a[i][j]>0)
				printf("\nAll non diagonal elements are not negative ");
			}
			break;
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]=a[j][i])
			printf("\nThe given matrix is not singular");
		}
	}
	return 0;
}
