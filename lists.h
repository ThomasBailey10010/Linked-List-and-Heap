#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct node{
int data;
struct node* cycle;
};

struct sent{
struct node *head;
struct node *tail;
//struct node* mdpt;
};

int pa3();
int parse(struct sent* s, int code);
int init(struct sent* s); 
int insert(struct sent* s, int code, int num);
int remove3(struct sent* s, int code);
int print(struct sent* s, int code);


