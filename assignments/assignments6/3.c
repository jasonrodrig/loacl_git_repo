//3. Write a function that takes int 'n' and returns an int array of size 'n' filled with first 'n' prime numbers.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int is_prime(int num)
{
    if(num < 2) return 0;
    for(int i = 2; i * i <= num; i++)
    {
        if(num % i == 0) return 0;
    }
    return 1;
}

int *get_primes(int n)
{
    int *primes = (int*)malloc(n * sizeof(int));
    int count = 0;
    int num = 2;
    while(count < n)
    {
        if(is_prime(num))
        {
            primes[count] = num;
            count++;
        }
        num++;
    }
    return primes;
}

int main() 
{
	int n = 5;
	int count = 0, i = 1, nth = 0;

	int *primes = get_primes(n);
	for (int i = 0; i < n; i++) {
		printf("%d ", primes[i]);
	}
         // 2 3 5 7 11
	  printf("\n");
	  free(primes);
	  return 0;
}
