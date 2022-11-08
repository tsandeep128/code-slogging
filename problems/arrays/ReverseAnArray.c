/*
Link: https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
Given an array (or string), the task is to reverse the array/string.

initial idea: create another array of same size. Traverse original array from 0 to N-1, traverse new array from N-1 to 0. 
Store value of original array into new array.

another idea: traverse till half of array, exchange value of 0th element with (N-1)th element. 
1st element with (N-2)th element and so on...
[ith element with (N-i-1)th element]



*/

#include<stdio.h>

int N = 5;
int arr[5] = {9,3,4,7,8};
int temp;

void main()
{
    for(int i=0; i<=(N/2);i++)
    {
        temp = arr[i];
        arr[i] = arr[N-i-1];
        arr[N-i-1] = temp;
    }

    printf("\n");
    for(int i=0; i<N; i++)
    {
        printf("%d ",arr[i]);
    }

}