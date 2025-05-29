//Write a function which takes two int arguments, factor and limit and prints all the numbers which are multiple of factor and are less than limit.

#include<stdio.h>
int factlimit( int fact , int limit )
{       int i , g=1 ; 
	for( i = 0 ; i <= limit ; i++)
	{
	       	g = fact * i  ;
		// printf( "%d" , g);
	        if (g < limit)
			printf( "\n%d" , g);

	}
	return 0;
}
int main()
{
	int n , t , l;
        printf("enter the number");
	scanf("%d",&n);
	printf("enter the limit");
	scanf("%d", &l);
	t = factlimit(n,l) ;
	return 0;
}
