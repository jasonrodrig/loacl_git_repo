//Write a function which takes an int 'n' and returns the sum of first 'n' natural numbers.

#include <stdio.h>

int natural(int n)
{
	int i , t;
	for (i=1 ; i<=n ; i++)
	{
		t = t + i ;
	}
	printf("%d",t);
	return 0;
}
int main()
{
	int n ;
	printf("enter the number");
	scanf("%d",&n);
	natural(n);
	return 0;
}
