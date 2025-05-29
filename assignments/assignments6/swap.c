#include<stdio.h>

void swap(char *a, char *b);
void reverse( char s[] )
{

	int front = 0;
	int back;
	//char x, y;
	for(back=0; *(s+back)!='\0'; back++){}
	back--;
	while(back>front)
	{
		//x = s[front];
	        //y = s[back];
		swap( &s[front] , &s[back] );
		front++;
		back--;
		//printf("reverse string is %s %s", x, y );
	}
}

void swap(char *a , char *b)
{
	char temp;
	temp = *a;
	*a = *b;
        *b = temp;
}

void main()
{
	char s[]="jason";
	reverse(s);
	printf("%s",s);
}

/*void sum(int *sum , int a ,int b)
{
         *sum = a + b;
}
void main()
{       int a=7;
        int b=6;
	int result=0;
	sum(&results,a,b);
	printf("%d",results);
}
*/
