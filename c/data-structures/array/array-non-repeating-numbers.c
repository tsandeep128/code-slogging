/*
Find the first non-repeating number in the array

TODO: not completed
*/

#include<stdio.h>

void nonRepeatingNum( int arr[], int n)
{
    int temp[n];

    for(int i=0; i<n; i++)
    {
        temp[i] = arr[i] ^ arr[i];
    }
     
    for(int i=0; i<n; i++)
    {
        if( temp [i] == 1)
        {

        }
    }
}

int main()
{
    int arr[5] = {1,2,1,2,4};

    nonRepeatingNum(arr,5);

    return 0;
}