#include<stdio.h>
int main()
{
	int n,r,c;
	printf("enter no. upto u want to print pattern\n");
	scanf("%d",&n);
	
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d",c);
		}
		printf("\n");
	}
	return 0;
}
