//Write a function to_upper to convert lower case letter to upper case letter. If the input
//is not a lower case letter, the function should return the input as is.

#include <stdio.h>
#include <ctype.h>
void to_upper(char a)
{
	if (islower(a))
		printf("%c\n", toupper(a));
	else
		printf("not a lower case");
}

int main()
{
     char a;
     printf("enter the letter\n");
     scanf("%c", &a);
     to_upper(a);
     return 0;
}
