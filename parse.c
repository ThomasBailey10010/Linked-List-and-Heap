/*
THIS FUNCTION BOTH INTIALIZES THE QUEUE AND STACK AS WELL AS PARSES COMMANDS
IT ALSO ACTS AS THE SWITCH FOR MODE OPERATION
IT FEEDS FROM MAIN AND FARMS TO PRINT POP AND INSERT
*/

#include "lists.h"

int parse(struct sent* s, int code){			//
char var[100];
char arg;						//Operation Code
int num=0;						//Number for insertion
int ret;						//Return value
int tracker[2];						//'Sizeof' list tracker
tracker[0]=0;
tracker[1]=0;

printf("*--------------------------------------------*\n");
printf("Commands are as follows:\n");
printf("#num    Inserts a number into the current operating list\n");
printf("p       Removes head from current operating list\n");
printf("s       Switches operation to 'Stack Mode' & displays contents\n");
printf("q       Switches operation to 'Queue Mode' & displays contents\n");
printf("Q       Exits the program\n");
//printf("~       Basic Debug\n");
printf("*--------------------------------------------*\n\n");


while(1){
	fgets(var, 100, stdin);
	if(isdigit(var[0]) != 0){			//If input is number
		sscanf(var,"%i",&num);			//Save number
		ret=insert(s, code, num);			//Insert into list
		tracker[code]=tracker[code]+ret;			//Increment current size of
	}
	else{
		sscanf(var,"%c",&arg);			//If input is command
		if(arg=='s'){
			code=0;				//Stack reference
			ret=print(s, code);

		}
		if(arg=='q'){
			code=1;				//Queue reference
			ret=print(s, code);
		}
		if(arg=='p'){
			ret=remove3(s, code);
			tracker[code]=tracker[code]-ret;		//Decrement current size of
		}
		if(arg=='Q'){
			printf("Exit Request\n");
			//clean();
			return(-1);			//Provide exit code for main
		}
		if(arg=='~'){
			printf("Current op-code %i, num vaule %i, return val %i\n",code,num,ret);
			printf("Size of Current is %i\n",tracker[code]);
		}
	}
        if(code==0){
                printf("---Stack---\n");
        }
        if(code==1){
                printf("---Queue---\n");
        }

}
return(0);
}
