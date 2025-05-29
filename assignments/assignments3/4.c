#include <stdio.h>

void histogram(char input_string[]) 
{
	int frequency[26] = {0}; 
        int i = 0;
        while (input_string[i] != '\0')
	{
		char ch = input_string[i];
                if (ch >= 'A' && ch <= 'Z')
		{
			ch = ch + 32 ; 
	       	}
                if (ch >= 'a' && ch <= 'z')
	       	{
			frequency[ch - 'a']++;
		}
                i++; 
        }

        for (i = 0; i < 26; i++)
	{
		if (frequency[i] > 0)
		{ 
			printf("%c: ", 'a' + i);
                        for (int j = 0; j < frequency[i]; j++)
			{
				printf("*"); 
                        }
			printf("\n");
		}
	}
}

int main() 
{
	char input_string[] = "PrOgRaMmInG";
        histogram(input_string);
        return 0;
}
