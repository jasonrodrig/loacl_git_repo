//3. Hello/Bye person
 
//Write a function that takes a string name as an argument and prints the string "Hello, <name>!"
//in one line and "Bye, <name>!" in the next line.
 
#include <stdio.h>
#include <string.h>

char name(char a[])
{
	char results1[20] , results2[20] ;
	strcpy( results1 ,"Hello," );
	strcat( results1 , a );
	strcpy( results2 ,"Bye," );
        strcat( results2 , a );
	printf( "%s\n %s\n", results1, results2 );
}
int main()
{
	char a[20] = "Jason!";
	name(a);
	return 0;		
}
