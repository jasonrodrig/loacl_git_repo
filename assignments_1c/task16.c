//9. Write a function which takes an int 'n', an int 'lower' and an int 'uppper'. It returns 0 if 'n' is not in the range [lower, upper] and 1 if 'n' is in the range [lower, upper].
 
#include <stdio.h>
void range(int n, int lower, int upper)
{  
  // if(n > lower && n < upper)
  if( lower < n < upper )
	   printf("%d",1);
   else
	   printf("%d",0);
}
int main()
{
	int n, lower , upper;
	printf("enter the number\n");
	printf("enter the lower number\n");
	printf("enter the upper number\n");
	scanf("%d",&n);
	scanf("%d",&upper);
	scanf("%d",&lower);
	range( n , lower, upper );
}
