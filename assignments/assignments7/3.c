//3. Write a function which takes an unsigned integer and returns the sum of all the digits in the number.
 
//Example:
 
//int s = sum_digits(1278)
//s == 18   // 1 + 2 + 7 + 8
 
//Hint: Use the % and / operators to extract digits from the number.

#include<stdio.h>
int sum_digits(int n)
{
	int i , j;
	int temp = n;
	int len = 0;
	int result = 0;
	if(temp==0)
	{
		len=1;
	}
	while(temp>0){
		temp=temp/10;
		len++;
	}
	temp = n;
	int rem = 0;
	int arr[len];
	for(i=0;i<len;i++){
		rem = temp % 10 ;
		temp = temp / 10;
		arr[i]=rem;
	}
	for(i=0;i<len;i++){
		result = result + arr[i];
	}
	return result;
}

int main(){

	int n = 1278;
	int s = sum_digits(n);
	printf("%d",s);
}
