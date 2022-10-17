#include<stdio.h>
int main()
{
    int n,a[50],i,b=0,c=0,d=0,e=0,f=0;
    printf("Enter the number of marks : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter mark %d : ",i+1);
        scanf("%d",&a[i]);
        if(a[i]>100)
        {
            printf("\nEnter a valid input : ");
            scanf("%d",&a[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=80)
        {
            b++;
        }
        else if(a[i]>=60)
        {
            c++;
        }
        else if(a[i]>=40)
        {
            d++;
        }
        else if(a[i]>=20)
        {
            e++;
        }
        else if(a[i]>0)
        {
            f++;
        }
    }
    printf("\nMark berteen 80 and 100 : %d",b);
    printf("\nMark berteen 60 and 80 : %d",c);
    printf("\nMark berteen 40 and 60 : %d",d);
    printf("\nMark berteen 20 and 40 : %d",e);
    printf("\nMark berteen 0 and 20 : %d",f);
}