//4. Write a function that takes an int array and returns an array with the differences between elements of the input array.

//Example:
//int main() {
//  int arr[] = {1, 7, 4, 10, 5};
//  int* diffs = get_diffs(arr, 5);
//  for (int i = 0; i < 4; i++) {
//    printf("%d ", diffs[i]);
//  }
  // 6 -3 6 -5
//  printf("\n");
// return 0;
//}

#include <stdio.h>
#include <stdlib.h>
int* get_diffs(int arr[], int size )
{
	int i , j =0;
	int *oth_arr=(int*)malloc((size - 1)*sizeof(int)); 
 	for(i=0;i<size;i++)
	{
	     oth_arr[i]= -arr[j+1]+arr[i];
	     j++;
	}
	return oth_arr;
}	

int main() {
  int arr[] = {1, 7, 4, 10, 5};
  int *diffs = get_diffs(arr, 5);
  for (int i = 0; i < 4; i++) {
    printf("%d ", diffs[i]);
  }
  // 6 -3 6 -5
  printf("\n");
  free(diffs);
  return 0;
}

