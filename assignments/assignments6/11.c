//1. Write a function that takes a string as input and returns the string reversed.
//int main() {
//  char[] s = "Hello";
//  char[] r = reverse(s);
//  printf("%s\n", r); // "olleH"
// printf("%s\n", s); // "Hello"
//  return 0;
//}


#include<stdio.h>
#include<stdlib.h>

char* reverse( char s[] )
{       
	int i , j;
	int len = 0;
	char temp;
	for(i=0; *(s+i)!='\0' ;i++){
		len++;
	}
	char *oth_arr = (char*)malloc(len*sizeof(char));
	for(i=0;i<len;i++)
	{
		oth_arr[i]=s[i];
	}
	for(i=0;i<len/2;i++)
	{
	       	temp = *(oth_arr+i);
		*(oth_arr+i) = *(oth_arr+len-i-1);
		*(oth_arr+len-i-1)=temp;
	}
	return oth_arr;
}

int main() {
  char s[] = "Hello";
  char *r = reverse(s);
  printf("%s\n", r); // "olleH"
  printf("%s\n", s); // "Hello"
  free(r);
  return 0;
}
