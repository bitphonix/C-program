#include<stdio.h>
int main()
{
	int yr;
	printf("enter year here\n\n");
	scanf("%d",&yr);
	
	if((yr%100==0&&yr%100==0)||(yr%100!=0&&yr%4==0))
		printf("year is a leap year\n");
	else
		printf("year is not a leap year");
	return 0;		
}
