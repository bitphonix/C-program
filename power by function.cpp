#include<stdio.h>
int power(int,int);
int main()
{
	int a,b,pow;
	printf("enter values of a and b\n");
	scanf("%d %d",&a,&b);
	pow=power(a,b);
	printf("%d to the power %d is %d",a,b,pow);
	return 0;
}
int power(int a,int b)
{
	int i;
	long p=1;
	for(i=1;i<=b;i++)
	{
		p=p*a;
	}
	return(p);
}
