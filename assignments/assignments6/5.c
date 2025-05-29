//5. Write a function that takes an int array and returns a new array with the elements of the input array doubled.

//Example:

//int main() {
//  int arr[] = {1, 7, 4, 10, 5};
//  int* doubled = double_elements_new(arr, 5);
//  for (int i = 0; i < 5; i++) {
//    printf("%d ", doubled[i]);
//  }
//  // 2 14 8 20 10
//  printf("\n");
//  return 0;
//}

#include<stdio.h>
#include<stdlib.h>

int* double_elements_new(int arr[] , int size)
{
	int *other_arr = (int*)malloc(size*sizeof(int));
	for(int i =0; i<size; i++)
	{
		other_arr[i]=2*arr[i];
	}
	return(other_arr);
}

int main() {
  int arr[] = {1, 7, 4, 10, 5};
  int* doubled = double_elements_new(arr, 5);
  for (int i = 0; i < 5; i++) {
    printf("%d ", doubled[i]);
  }
  // 2 14 8 20 10
  printf("\n");
  free(doubled);
  return 0;
}
