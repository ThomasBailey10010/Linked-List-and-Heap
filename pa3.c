/*
THOMAS BAILEY
CSE 222
PROF MACICAS

USES AN ARRAY OF SENTINELS AND AN OP-CODE, BECAUSE THE ORIENTATION OF THE NODE INDEX 
'CYCLE' DETERMINES THE DIRECTION THE HEAD AND TAIL OF THE LIST, BY CHANGING ITS ORIENTATION 
A QUEUE OR STACK CAN BE DETERMINED FROM DIFFERENT PORTIONS OF THE SENTINEL ARRAY.  THE 
OP-CODE IS SIMPLY A REFERENCE TO A MEMBER OF THE SENTINEL ARRAY.

INDICES 
For LIFO 'cycle' points to the previous node
For FIFO 'cycle' points ot the next node
CODES
Sentnnel location 0 is stack mode
Sentinel location 1 is queue mode
Successful returns are a 1 failures are -1 pass throughs are 0
	---STRUCTURE OVERHEAD---

                INIT
                 |
                MAIN
                 ||
                PARSE
          PRINT(MODE SELECT)
             //         \\
            POP       INSERT
*/


#include "lists.h"

int main(void){
int code=0;					//Determines operational state of all functions
struct sent s[2];				//Array of 2 sentinel node

init(s);					//Initialize
	while(1){
		if(parse(s, code)==-1){		//Continiue unless kill command
			return(0);
		}
	}
}

