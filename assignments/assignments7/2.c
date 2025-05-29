//2. Write a function which takes an unsigned integer and returns the sum of all the factors of the number.
 
//Example:
 
//int s = sum_factors(10)
//s == 18   // 1 + 2 + 5 + 10

#include<stdio.h>
int sum_factors(int n)
{
	int result = n;
	int num = n;
	for(int i=0;i<4;i++)
	{
		num=num/2;
		result+=num;
	}
	return result;
}
int main()
{
	int n=10;
	int s = sum_factors(10);
	printf("%d",s);
        return 0;
}
