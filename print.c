#include "lists.h"

int print(struct sent* s, int code){
struct node* temp;

	if(s[code].tail==NULL){
		printf("List is Empty\n");
		return(1);
	}

	if(code==0){

		temp = s[code].head;			//Set print orientation for LIFO
		printf("TOS-> ");
	        while( temp->cycle != NULL){
	                printf("%i, ", temp->data);
	                temp=temp->cycle;
	        }
	        printf("%i <-BOS", temp->data);

	}
	if(code==1){
		temp =s[code].tail;
		printf("TAIL-> ");
	        while( temp->cycle != NULL){
	                printf("%i, ", temp->data);
	                temp=temp->cycle;
	        }
	        printf("%i <-HEAD\n", temp->data);
	}
	printf("\n");
return(0);
}
