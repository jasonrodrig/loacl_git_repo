//2. print_histogram_of_integers

//Write a function print_histogram_of_integers that takes an array of integers and its size as input and prints a histogram of the integer frequencies. 
//You can assume that that there will be at the most 20 unique integers in the array.

//Example:

//int arrray = {7, 19, 3, 7, 3, 7, 3, 7, 19, 7, 3, 19, 19, 19, 19, 19, 7, 7, 7, 7};

//print_histogram_of_integers(arrray, 20);

//should print:

//7: *********
//19: *******
//3: ****

#include<stdio.h>

void histogram_of_integers(int array[], int size)
{
	int i, j ;
	int repeat = 0;
	int single_count = 0 ;
	int single_element[20];
	for (i = 0; i < size ; i++)
	{
		for (j = 0; j < single_count ; j++)
		{
			if(single_element[j] == array[i])
			{
				repeat=1;
				break;
			}
		}
		if(repeat==0)
		{
			single_element[single_count]=array[i];
			single_count++;
		}
	
		repeat=0;
	}
	
	for(i=0;i<single_count;i++)
	{
		printf("%d",single_element[i]);
		for(j=0;j<size;j++)
		{
			if(array[j]==single_element[i])
			{
				printf("*");
			}
		}
		printf("\n");
	}

}

void main()
{
	int array[] = {7, 19, 3, 7, 3, 7, 3, 7, 19, 7, 3, 19, 19, 19, 19, 19, 7, 7, 7, 7};
        histogram_of_integers(array,20);
}
