/*
Link: https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
Given an array of size N. The task is to find the maximum and the minimum element of the array using the minimum number of comparisons.

initial idea: create 2 vars - min & max, store 1st element of array in both, traverse through array while comparing with 2 vars, 
if element is greater than max - update max, if element is less than min - update min.
No. of comparisons = (N-1) comparisons for both min & max = 2*(N-1) comparisons

Optimization #1: Compare 1st & 2nd element of array. Store lower value in min, higher value in max - then start traversing
No. of comparisons = 1+2*(N-2)

Optimization #2: Compare 1st & 2nd element of array. Store lower value in min, higher value in max - then start traversing. 
While traversing, first only check if element is greater than max - If yes, update max = new element
- If no, check if element is less than min - If yes, update min = new element
No. of comparisons = 1+(N-2) best case: ascending order; 1+2*(N-2) worst case: descending order

Method #3: Greedy: Divide into left half and right half. Find min & max of left half and right half. 
Compare min & max of left half and right half to find overall min & max.

Method #4: Compare in pairs

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