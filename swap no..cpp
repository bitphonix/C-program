#include<stdio.h>
int main()
{
	int a,b,e;
	
	printf("enter the values of a,b\n");
	scanf("%d %d",&a,&b);
	
	e=a;
	a=b;
	b=e;
	
	printf("values of a,b are getting swapped a=%d b=%d",a,b);
	return 0;
}
