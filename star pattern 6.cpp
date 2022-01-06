#include<stdio.h>
int main()
{
	int n,r,c;
	printf("enter the no. upto u want to print the pattern\n");
	scanf("%d",&n);
	
	for(r=1;r<=2*n-1;r++)
	{
		int	total_col_inrows=(r>n?2*n-r:r);
		for(c=1;c<=total_col_inrows;c++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
