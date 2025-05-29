//3. is_substring
 
//Write a function that takes two strings and returns a 0/1 indicating whether or not the first
//string is a substring of the second.

#include<stdio.h>
int is_sub_string(char str[], char sub_str[])
{
       	int letter_matches = 0;
        int sub_string_size = 0;
        while (sub_str[sub_string_size] != '\0') 
	{
		sub_string_size++;
	}
	for (int i = 0; str[i] != '\0'; i++)
	{
		letter_matches = 0; 
		for (int j = 0; j < sub_string_size; j++)
		{
			if (str[i + j] == sub_str[j]) 
			{
				letter_matches++;
                        }
		       	else 
			{
				break; 
			}
                }
		if (letter_matches == sub_string_size)
		{
			return 1;
		}
	}
	return 0;
}

void main()
{
	char str[20] , sub_str[20];
	printf("enter the string\n");
	scanf("%s",str);
	printf("enter the substring\n");
	scanf("%s",sub_str);
	printf("%d",is_sub_string( str, sub_str));
}

