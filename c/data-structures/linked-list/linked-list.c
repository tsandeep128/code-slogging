/*
Basic implementation of linked list using structure
*/

#include<stdio.h>

struct node
{
    int data;
    struct node *next;
}x;

int main()
{
    struct node *ptr;

    ptr = (struct node*)malloc(sizeof(struct node));

    ptr->data = 5;
    x.data = 10;
    //x->data = 15;

    int a = ptr->data;
    int b = x.data;    

    printf("%d", a);

    return 0;
}