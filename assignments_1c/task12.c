
//Write a function which takes an int 'n' and returns the sum of first 'n' even numbers.

#include <stdio.h>

void evensum(int n)
{
	printf("%d",(n*n-1));

}
int main()
{
	int n ;
	printf("enter the number");
	scanf("%d",&n);
	evensum(n);
	return 0;
}
