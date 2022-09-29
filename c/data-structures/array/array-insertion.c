/*
Inserting new element x in an array at index k
*/

#include<stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5};
    int i,n,k,x;

    n=5;    // no of elements in existing array
    k=2;    // index where new element to be inserted
    x=100;  // value of new element to be inserted

    //print intial array before element insertion
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for(i=n+1;i>k; i--)
    {
        arr[i] = arr[i-1];
    }
    // insert element
    arr[k] = x;

    //print array with inserted element
    for(i=0;i<n+1;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}