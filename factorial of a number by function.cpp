#include<stdio.h>
int fact(int);
int main()
{
	int n,factorial_;
	printf("Enter tne no. for which u want to find factorial\n");
	scanf("%d",&n);
	factorial_=fact(n);
	printf("factorial of %d is=%d",n,factorial_);
	return 0;
}
int fact(int n)
{
	int i=1;
	long factorial=1;
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	return(factorial);
}
