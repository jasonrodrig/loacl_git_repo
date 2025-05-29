// Write a function which takes an int 'n' and an int 'factor' and returns the sum of first 'n' numbers which are multiple of 'factor'.
#include<stdio.h>
int factlimit( int n , int f )
{       int i, g ;
	for( i= 0 ; i <= n ; i++)
	       	g = g + f * i  ;
       	printf( "%d" , g);
	
	return 0;
}
int main()
{
	int n , t , f;
        printf("enter the number");
	scanf("%d",&n);
	printf("enter the fact");
	scanf("%d", &f);
	t = factlimit(n,f) ;
	return 0;
}

