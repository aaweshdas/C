#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*prev;
    struct node*next;
};

//insertion at the end
void insert()