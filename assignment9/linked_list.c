#include<stdio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node *next;
};
//struct node *head=NULL;
void append(struct node **head, struct node *temp, int size){
    	int i = 0;

	struct node *newnode;
       	while(i<size)
        {
           newnode = (struct node*)malloc(sizeof(struct node));
           printf("enter data");
           scanf("%d",&newnode->data);
           newnode->next = NULL;
           if(*head==NULL){
		   *head=newnode;
                  // temp=newnode;
	   }
           else
           {
                   temp->next=newnode;
	   }
                   temp = newnode;
	   
	// newnode->next = 0;
           i++;
       }
}
void print_list(struct node **head, struct node *temp){
	struct node *tmp = *head;
	while(tmp != NULL)
    	 {
	//	printf("%d\t %p\n",tmp->data,tmp->next);
	//	printf("%p", tmp->next);
		printf("%d\t",tmp->data);

		tmp = tmp->next;
	 }
}

int len( struct node **head, struct node *temp)
{
       struct node *tmp =*head;
       int count=0;
       while( tmp != NULL ){
            count++;
	    tmp=tmp->next;
       }
    return count;      
}

int remv(struct node **head, struct node *temp, int rm_value){
    struct node *tmp = *head;
    struct node *prev = NULL;
    int found = 0;
    while (tmp != NULL) {
        if (tmp->data == rm_value) {
            found = 1;
            if (prev == NULL) {
                *head = tmp->next;
            } else {
                prev->next = tmp->next;
		//return found;
            }
          //  struct node *to_free = tmp; 
          //   tmp = tmp->next;
	  break; 
          //  free(to_free); 
        } else {
            prev = tmp;
            tmp = tmp->next;
	   // printf("%d",tmp->next);
        }
    } 
    return found;
}

int remvat(struct node **head, struct node *temp,int rm_index){    
    if(*head == NULL) {
	return 0;
    }
    int count = 0;
    struct node *tmp = *head;
    //struct node *prev = NULL;
    int found = 0;

    if(rm_index == 0) {
	*head = tmp->next;
	return 1;
    }

    while (tmp->next != NULL) {
        if (count == rm_index -1) {
            found = 1;
	    tmp->next = tmp->next->next;
	    return found;
        } 
            //prev = tmp;
        tmp = tmp->next;
	count++;
        
    }
    return found;
}

//struct node* remove_at(struct node **head,int position){}

void free_linked_list(struct node *head)
{
struct node *tmp = head;
    while (tmp != NULL) {
        struct node *next_one = tmp->next;
        free(tmp);
        tmp = next_one;
    }
}
int main(){
    struct node *head = NULL;
    //struct node *newnode;
    struct node *temp;
    
    int size;
   
   // append(&head , &newnode , &temp, size);
    printf("enter the size ");
    scanf("%d",&size);
    
    append(&head ,temp, size);
    printf("\n");
    print_list(&head,temp);
    printf("\n");
   printf("length of the list : %d\n", len(&head,temp));
    printf("Removed: %d\n",remv(&head,temp,3));
    print_list(&head,temp);
   // free(head);
  // append(&head ,temp, size);
    printf("Removed: %d\n",remvat(&head,temp,3));
    print_list(&head,temp);
    //printf("head->data : %d ",newnode->data); 
    free_linked_list(head);
    return 0;
}


