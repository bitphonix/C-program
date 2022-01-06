#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character \n");
	scanf("%c",&ch);
	
	if(ch>=65&&ch<=90)
	printf("enter character is capital letter\n");
	else if(ch>=97&&ch<=122)
	printf("enter character is small\n");
	else if(ch>=48&&ch<=57)
	printf("enter character is a number\n");
	else if(ch>=0&&ch<=47||ch>=58&&ch<=64||ch>=91&&ch<=96||ch>=123&&ch<=127)
	printf("enter character is a special symbol\n");
	
	return 0;
}
