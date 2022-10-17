#include<stdio.h>
#include<string.h>
int main()
{
	int i,b;
	char a[b];
	printf("Enter the string : ");
	scanf("%s",&a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		if(a[i]==90 || a[i]==122)
		{
			a[i]-=25;
		}
		else
		{
			a[i]++;
		}
	}
	printf("%s",a);
	return 0;
}