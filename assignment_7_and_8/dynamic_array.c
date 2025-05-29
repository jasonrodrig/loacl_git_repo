#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

struct dynamic_array {
    int *data;        
    int size;         
    int slot;   
};

void init(struct dynamic_array *arr, int size) {
   // if (slot <= 0) {
     //   slot = 1; 
   // }
    arr->data = (int *)malloc(size * sizeof(int));
    //if (arr->slot == NULL) {
    //    printf( "Memory allocation failed\n");
   // }

    arr->size = size;
    arr->slot = 0;
}

void entry(struct dynamic_array *arr, int value) {
    
    if (arr->size <= arr->slot) {
	arr->data = (int *)realloc(arr->data, arr->slot * sizeof(int));
       // if (arr->data == NULL) {
       //     printf("Memory reallocation failed\n");
       // }
    }
    arr->data[arr->slot++] = value; 
}


void free_dynamic_array(struct dynamic_array *arr) {
    free(arr->data);
    //arr->data = NULL; 
    arr->size = 0;
    arr->slot = 0;
}


void print_array(struct dynamic_array *arr) {
	for (int i = 0; i < arr->slot; i++) {
        printf("%d ", arr->data[i]);
    }
    printf("\n");
}

int remov(struct dynamic_array *arr, int remove_value){
        int loc = 0;
	for( ; loc < arr->slot ; loc++)
	{
		if(arr->data[loc] == remove_value)
		{
			for(; loc < arr->slot; loc ++)
				arr->data[loc] = arr->data[loc+1];
           		
			arr->slot = arr->slot - 1;
			return 1;
		}
	}
	
     return 0;
}
int len(struct dynamic_array *arr){
     int len = 0;      
     len = arr->slot;          
     return len;
}
int removat(struct dynamic_array *arr, int index){
 int loc = 0;
     while(loc < arr->slot){ 
                if(arr->data[loc] == arr->data[index])
                {
                        for(; loc < arr->slot; loc ++)
                                arr->data[loc] = arr->data[loc+1];

                        arr->slot = arr->slot - 1;
                        return 1;
                }
        loc++;		
     }
     return 0;
       
}

int *slice(struct dynamic_array *arr, int start_index, int end_index){
 	int *arr_in = malloc((end_index-start_index + 1)*sizeof(int));
	int i =start_index;
     while( start_index <= end_index){
	     arr_in[start_index - i] = arr->data[start_index];
        start_index++;
     }
     return arr_in;
}

int main() {
    struct dynamic_array arr;
   
    init(&arr, 10); 
    
    entry(&arr, 10);
    entry(&arr, 20);
    entry(&arr, 30); 
    
    print_array(&arr);

    printf("%d\n",remov(&arr, 10));
   
    print_array(&arr);
    
    entry(&arr, 10);
    entry(&arr, 20);
    entry(&arr, 30);
    print_array(&arr);

    printf("len of the array %d\n:",len(&arr));

    printf("%d\n",removat(&arr, 2));
    print_array(&arr);
    
    entry(&arr, 1);
    entry(&arr, 2);
    entry(&arr, 3);
    print_array(&arr);
    
    int *arr_in = slice(&arr,1,5);
    for(int i = 0; i < 5; i++)
	    printf("%d\t",arr_in[i]);

    free_dynamic_array(&arr);
    return 0;
}
