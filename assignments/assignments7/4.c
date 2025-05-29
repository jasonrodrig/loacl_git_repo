//4. Write a function which takes a string and returns the number of words in the string. Assume
//that there is always one space separating the words and there are no spaces at the begining
//or the end of the string.
 
//Example:
 
//int s = count_words("hello world, how are you?")
//s == 5
 
//Empty string should return a count of 0.
 
//int s = count_words("")
//s == 0

#include<stdio.h>
int count_words(char s[])
{       
	int i ;
	int count = 0 ;
	if(s[0] ==' '){
		count=0;
	}
	else{
		for(i=1;s[i]==' ';i++){
			count++;
		}
	}
	
        return count;
}
int main(){
	char str1[]="hello world, how are you?";
	char str2[]="";
	int s = count_words(str1);
	printf("%d",s);
	int u = count_words(str2);
        printf("%d",u);
	return 0;
}
