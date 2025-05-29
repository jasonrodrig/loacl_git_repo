//Write a function which takes a number and goes over numbers from 1 to 'n' and prints "Fizz" if
//the number is divisible by 3, "Buzz" if the number is divisible by 5, "FizzBuzz" if the number
//is divisible by 3 and 5, and the number itself otherwise.

#include <stdio.h>
int func(int n)
{
	if ( ( n % 15) == 0 )
		printf("FrizzBuzz\n");
	else if ( ( n % 3 ) == 0)
		printf("Frizz\n");
	else if ( ( n % 5) == 0)
		printf("Buzz\n");
	else
		printf("not a frizz or buzz or frizzbuzz\n");

	return 0;
}
int main()
{
	int n , i;
	printf("enter the numnber\n");
	scanf("%d",&n);
	for(i = 1 ; i <= n ; i++)
	{
		func(i);
	}
        return 0;
}
