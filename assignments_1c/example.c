#include<stdio.h>
void main()
{
	int a=0x33;
	int b=0x11;
        if( a&b ){
		printf("true");
	}
	else
		printf("false");
	
	if( a&&b ){
		printf("true");
	}
	else
		printf("false");
}	
