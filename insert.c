/*
THERE ARE 4 EDGE CASES TO CONSIDER
        1 - FIRST INSERTION
*/

#include "lists.h"

int insert(struct sent* s, int code,int num){
struct node* temp;
temp=malloc(sizeof(struct node));
temp->data=num;

//--var.var is for things that dont have ptrs var->var is for things that do have ptrs ?

	if(s[code].head==NULL){				//Edge case 1
		temp->cycle=NULL;				//First node is last
		s[code].head=temp;				//Set Head to new node
		s[code].tail=temp;				//Set Tail to new node
		return(1);
	}

	else{							//For nonempty lists

		if(code==0){					//Stack insert
			temp->cycle=s[code].head;		//Set cycle to prev (points previous)
			s[code].head=temp;			//Set sent head to temp
			return(1);
		}
		if(code==1){                                                    //Queue insert
			temp->cycle=s[code].tail;		//Set cycle to next (points fwd)
                        s[code].tail=temp;			//Set the tail to new
                        return(1);
                }

	}
printf("Invalid exit from 'insert'\n");
return(0);
}
