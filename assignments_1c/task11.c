
//Write a function which takes an int 'n' and returns the sum of first 'n' odd numbers.

#include <stdio.h>

void oddsum(int n)
{
	printf("%d",(n*n));

}
int main()
{
	int n ;
	printf("enter the number");
	scanf("%d",&n);
	oddsum(n);
	return 0;
}
