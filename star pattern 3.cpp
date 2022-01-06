#include<stdio.h>
int main()
{
	int n,r,c;
	printf("enter no. upto u want to print pattern\n");
	scanf("%d",&n);
	
	for(r=1;r<=n;r++)
	{
		for(c=n;c>=r;c--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
