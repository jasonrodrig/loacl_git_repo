//. Write function which takes an int 'n' and returns 1 if it is odd and 0 if it is even.
#include <stdio.h>
int odd_out(int n)
{
	if (( n % 2) != 0)
	       	return 1;
	else 
		return 0;
}

int main()
{
	int n , t ;
	printf("enter the number\n");
	scanf( "%d" , &n );
	t = odd_out(n);
	printf( "%d" , t );
        return 0;	
}
