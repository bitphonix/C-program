#include<stdio.h>
int main()
{
    int i,j,number;
    char ch;
    printf("Enter The Number of Rows: ");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        ch='A';
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch++);
        }
        printf("\n");
    }

    return 0;
}
