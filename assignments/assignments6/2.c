//2. Write a function that takes two strings and returns a string which is a concatenation of the two strings.

//Example:
//int main() {
//  char[] s1 = "Hello";
//  char[] s2 = "World";
//  char* s3 = concat(s1, s2);
//  printf("%s\n", s3); // "HelloWorld"
//  printf("%s\n", s1); // "Hello"
//  printf("%s\n", s2); // "World"
//  return 0;
//}

#include <stdio.h>
#include <stdlib.h>
char* concat(char s1[] ,  char s2[])
{
	char *wordcombine1 = s1;
	char *wordcombine2 = s2;
        int i , j;
	for(i = 0 ; *(wordcombine1+i)!='\0'; i++ ){}
       	for(j = 0 ; *(wordcombine2+j)!='\0'; j++ ){}
        char *wordcombine =(char*)malloc((i+j)*sizeof(char));
	for(i = 0 ; *(wordcombine1+i)!='\0'; i++){
		wordcombine[i]= *(wordcombine1+i);	
	}
        for(j = 0 ; *(wordcombine2+j)!='\0'; j++ ){
		wordcombine[i+j]= *(wordcombine2+j);
	}
	return(wordcombine);
}


int main() {
  char s1[] = "Hello";
  char s2[] = "World";
  char* s3 = concat(s1, s2);
  printf("%s\n", s3); // "HelloWorld"
  printf("%s\n", s1); // "Hello"
  printf("%s\n", s2); // "World"
  free(s3);
  return 0;
}


