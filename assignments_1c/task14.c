//Use the function in 6 to rewrite the function in 3 and 5.
//6.Write a function which takes an int 'n' and an int 'factor' and returns the sum of first 'n' numbers which are multiple of 'factor'.
//3.Write a function which takes an int 'n' and returns the sum of first 'n' natural numbers.
//5.Write a function which takes an int 'n' and returns the sum of first 'n' even numbers.
#include<stdio.h>
int sum_nat( int n , int f )
{       int i, g = 0 ;
	for( i= 1 ; i <= n ; i++){
	       	g+=f * i;
	}
	        
	return(printf( "%d\n" , g));
	
	
}
int sum_even( int n , int f )
{       int i, g = 0 ;
	for( i = 0 ; i<=n ; i+=2){
		g+= f * i;
	}
	return(printf( "%d\n" , g));
	
}
int main()
{
	int n , t , f , h;
        printf("enter the number");
	scanf("%d",&n);
	printf("enter the fact");
	scanf("%d", &f);
	t = sum_nat(n,f) ;
	h = sum_even(n,f);
	return 0;
}
