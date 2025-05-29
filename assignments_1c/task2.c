//2. Hello person
 
//Write a function that takes a string name as an argument and prints the string//"Hello, <name>!".

#include<stdio.h>
#include<string.h>
char name(char a[])
{
	char results[20] ;
	strcpy(results ,"Hello");
	strcat(results , a);
	printf("%s", results);
}
int main()
{
	char a[20] = "Jason!";
	name(a);
	return 0;		
}
