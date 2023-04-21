#include<stdio.h>

main()
{
	char ch;
	printf("enter your value");
	scanf("%c",&ch);
	
	if(ch>='A'&& ch<='Z')
	{
		printf("this value is in first alphabet");
	}
	else if (ch>='a'&&ch<='z')
	{
		printf("this value is in small alphabet");
	}
	else if (ch>='0'&&ch<='99999')
	{
		printf("this is namber value");
	}
	else
	{
		printf("this is special character");
	}
}
