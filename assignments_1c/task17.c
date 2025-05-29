//Write a function which takes an int 'n' returns the absolute value of 'n'.
#include <stdio.h>

void abso(int n)
{
	if (n>=0)
		printf("%d",n);
	else
		printf("%d",n*(-1));
}
int main()
{
	int n;
	printf("enter the magntude of number");
	scanf("%d", &n);
	abso(n);
	
	return 0;
}

