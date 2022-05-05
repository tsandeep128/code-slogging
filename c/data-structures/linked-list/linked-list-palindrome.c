/*
Find if given linked list is palindrome or not

TODO: not completed
*/

#include<stdio.h>

struct node
{
    int val;
    struct node* next;
};

int main()
{
    struct node a,b,c;

    a.val = 1;
    b.val = 2;
    c.val = 3;
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    printf("%d,%d,%d \n", a.val,b.val,c.val);

    struct node temp = a;
    while( temp.next != NULL )
    {
        
    }
    
    return 0;
}