#include<stdio.h>
int main()
{
    int number, line, i, space, j=0, rows;
 	printf("enter no. of lines:\n");
 	
    scanf("%d", &number);
 
    for(line=1; line<=number; line++)
    {
        scanf("%d", &rows);
 
        for(i=rows; i>=1; --i, j=0)
        {
            for(space=1; space<=rows-i; ++space)
            {
                printf("  ");
            }
 
            while(j != 2*i-1)
            {
                printf("* ");
                ++j;
            }
 
                printf("\n");
        }
    }
    return 0;
}
