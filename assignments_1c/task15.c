// Write a function which takes an int 'n' and returns the factorial of 'n'.
#include <stdio.h>
int fact(int i)
{
	if(i==0)
		return 1;
	if(i==1) 
		return 1;
	else
		return ( i * fact(i-1) );
                              
}
int main()
{
	int n , f ;
	printf("enter the  number");
	scanf( "%d" , &n);
 	f=fact(n);
	printf("%d",f);
	return 0;
}
