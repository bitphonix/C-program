#include<stdio.h>
int main()
{
	int num,a;
	int rn=0,num2,count=1;
	printf("Enter five digit no.\n");
	scanf("%d",&num);
	num2=num;
	while(count<=5)
	{
		a=num%10;
		num=num/10;
		rn=rn*10+a;
		count++;
	}
	if(rn==num2)
		printf("number is equal to reverse of number\n");
	else
		printf("number is not eual to reverse no.\n");	
	return 0;
}
