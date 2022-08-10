/*
EDGE CASE OF LAST NODE TO BE REMOVED
EDGE CASE OF EMPTY LIST REMOVAL
*/

#include "lists.h"

int remove3(struct sent* s, int code){
struct node* temp;

	if((s[code].head==NULL) || (s[code].tail==NULL)) {				///Empty list edge case
		printf("No data avalible for removal\n");
		return(0);
	}

	if(s[code].head==s[code].tail){			//If Last node in list
		temp=s[code].head;			//Set temp to final node
		printf("Removed: %i \n",temp->data);
		free(temp);				//Release final node
		s[code].head=s[code].tail=NULL;		//Reset Sential
		return(1);
	}

	if(code==0){					//For Stack mode
		temp=s[code].head;
		s[code].head=temp->cycle;		//Sets head to the previous node
		printf("Removed: %i \n",temp->data);
		free(temp);
		return(1);
	}
	if(code==1){					//For QUEUE mode
							//This is where a double linked list would have helped
		temp=s[code].tail;
		while(temp->cycle->cycle!=NULL){	//Index upto the Head
			temp=temp->cycle;
		}
		s[code].head=temp;			//Set Head to location before that to be removed
		temp=temp->cycle;			//Set Index to Location to be removed
		printf("Removed: %i \n",temp->data);		//Print Data being removed
		free(temp);				//Free memory location
		s[code].head->cycle=NULL;		//Reset Head, Must go at END to prevent seg-fault
		return(1);
	}
return(0);
}
