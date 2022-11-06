/*
Link: https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
Given an array of size N. The task is to find the maximum and the minimum element of the array using the minimum number of comparisons.

initial idea: create 2 vars - min & max, store 1st element of array in both, traverse through array while comparing with 2 vars, 
if element is greater than max - update max, if element is less than min - update min.
No. of comparisons = (N-1) comparisons for both min & max = 2*(N-1) comparisons

*/

#include<stdio.h>

const int N=5;
int arr[5] = {3,4,5,1,2};

void main()
{
    int minarr, maxarr;

    minarr = arr[0];
    maxarr = arr[0];

    for(int i=0;i<N;i++)
    {
        if( arr[i] < minarr )
            minarr = arr[i];
        if( arr[i] > maxarr )
            maxarr = arr[i];
    }

    printf("\nMin val= %d; Max val= %d\n", minarr, maxarr);

}