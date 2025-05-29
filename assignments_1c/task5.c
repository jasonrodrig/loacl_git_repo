//5. print_case
 
//Write a function that takes a character as an argument and prints "lower case" if the character
//is a lower case letter and "upper case" if the character is an upper case letter. If the character
//is not a letter, the function should print "not a letter".
 
#include <stdio.h>
#include <ctype.h>

void name(char a)
{
	if ( isupper(a) )
		printf( "it'a uppercase" );
	else if ( islower(a) )
		printf( "it'a lowercase" );
	else
		printf("nither a letter");	

}
int main()
{
	char a;
	printf("enter the letter\n");
	scanf("%s",&a);
	name(a);
        return 0;	
}
