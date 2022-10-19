#include <stdio.h>
#include<string.h>
struct scooter{
	char name[25],serialno[25],color[25];
	int year,horsepower;
}s[20];
int main()
{ 	
	int i;
    FILE *fp;
    fp=fopen("vehicle.txt","a");
	printf("Enter The records of the Scooter:\n\n");
	for(i=1;i<10;i++)
	{
	printf("\nEnter the scooter model :");
	scanf("%s",s[i].name);
	printf("Enter the serial no :");
	scanf("%s",s[i].serialno);
	printf("Enter the colour :");
	scanf("%s",s[i].color);
	printf("Enter the year of manufacture :");
	scanf("%d",&s[i].year);
	printf("Enter the horse power:");
	scanf("%d",&s[i].horsepower);
	fprintf(fp,"\nScooter model : %s\nSerial Number : %s"
	"\nColour : %s\nYear : %d\nHorse power : %d",s[i].name,s[i].serialno,s[i].color,s[i].year,s[i].horsepower);
	}		
	printf("\n Records are stored in the file.....");
	fclose(fp);
 	return 0;
}
