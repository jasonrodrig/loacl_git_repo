//1. Implement and test stack of integers using array. It should support the following interface.

//void push(int x);  push an integer x onto the stack
//int pop();  remove the top element from the stack and return it
//int is_empty();  return 1 if the stack is empty, 0 otherwise
//int is_full();  return 1 if the stack is full, 0 otherwise
//void print();  print the elements of the stack

//Test the stack implementation by pushing 10 integers onto the stack, then popping 5 integers from the stack, 
//and then pushing 5 more integers onto the stack. Print the elements of the stack after each operation.

#include<stdio.h>
#define stack_size 10

int main_stack[stack_size] = {0};
int pc=0;

void push(int elements)
{
	if(pc!=stack_size)
	{
		main_stack[pc]=elements;
		pc++;
	}
		
}
int pop()
{
	int new_elements = 0;
        if(pc>=0)
        {      
		pc--;
                new_elements = main_stack[pc];
		main_stack[pc]=0;
		return new_elements;
	}
}

int is_empty()
{
    if(pc==0)
	    return 1;
    else
	    return 0;
}

int is_full()
{
	if(pc == stack_size)
		return 1;
	else
		return 0;
}

void print()
{
	int full =0 ; int empty = 0 ;
	for(int j=0;j<stack_size;j++)
        {
                printf("elements[%d]: %d\n", j , main_stack[j]);
        }
        printf("the main stack is empty: %d\n", is_empty(empty));
        printf("the main stack is full:  %d\n", is_full(full));

}
int main()
{
	int i , j ;
        int elements;
        printf("enter the elements\n");
        for(i=0;i < stack_size; i++ )
	{
		printf("enter the elements[%d]:\n",i);
	        scanf("%d", &elements);	
		push(elements);
	}
	print();
        for(int j=0; j<5 ; j++)
        {
             printf("elements[%d]:%d\n", j , pop());
        }
	print();
	for(i=1;i<=5;i++)
	{
		push(i);
	}
	print();
}
