//2. Hello Person
 
//Write a function that takes a string name as an argument and prints the string "Hello, <name>!".
//Name should be capitalized. For now we will assume that name has only one word. Use to_upper fn.that you wrote above.

#include <stdio.h>

void to_upper(char name[])
{
	for(int i=0;name[i]!='\0';i++)
	{
		if(name[i]>=97 && name[i]<=122)
		{
			name[i]=name[i]-32;
		}
	}
        printf("Hello, %s",name);

}
int main()
{
        char name[20];
        printf("enter the letter\n");
        scanf("%s",name);
        to_upper(name);
        return 0;
}

