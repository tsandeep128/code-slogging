/*
Inserting new element x in an array at index k
*/

#include<stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5};
    int i,n,k,x;

    n=5;    // no of elements in existing array
    k=2;    // index of element to be deleted
    //OR
    x=4;    // value of element to be deleted
    
    //print intial array before element deletion
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    //find k if value of element is known instead of index
    /*
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
            {
                k = i;
                break;
            }  
    }
    */
   
    //delete element
    for(i=k;i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[i] = 0;     //replacing last element with 0

    //print array with inserted element
    for(i=0;i<n-1;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}