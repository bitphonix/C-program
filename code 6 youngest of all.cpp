#include<stdio.h>
#include<math.h>
int main()
{
	int r,s,a;
	printf("enter ages of three\n");
	scanf("%d %d %d",&r,&s,&a);
	
	if(r<s)
	{
		if(r<a)
			printf("ram is youngest\n");
		else
			printf("ajay is youngest\n");
	}
	else
	{
		if(s<a)
			printf("shyam is youngest\n");
		else
			printf("ajay is youngest\n");	
	}
	return 0;			
}
