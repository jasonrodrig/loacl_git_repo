//1. Write a function which takes a list of integers and its length and returns the sum of all the prime numbers in the list.
 
//Example:
 
//int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
//int s = sum_primes(x, 10)
 
//s == 17
#include<stdio.h>
int sum_primes(int x[] ,int size)
{
        int i;
	int result=0;
	int primenum=0;
	for(i=0; i<size  ;i++)
	{
		if(x[i]==2){
			primenum=2;
		}
		else if(x[i]==3){
			primenum=3;
		}
		else if(x[i]==5){
			primenum=5;
		}
		else if(x[i]==7){
			primenum=7;
		}
		else{
			continue;
		}
		result+=primenum;
	}
	return result;
}

void main(){
	int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int t = sum_primes(x,10);
	printf("%d\n", t);
}
