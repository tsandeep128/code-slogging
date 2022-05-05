/*
Better approach: use one pass to find smallest and 2nd smallest element simultaneously
*/

#include<stdio.h>
#include<limits.h>

void find2smallest( int arr[], int n)
{
    int first, second;
    first = second = INT_MAX;

    //find first and second
    for (int i=0; i<n; i++)
    {
        if( arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
        else if( arr[i]> first && arr[i]< second)
        {
            second = arr[i];
        }
    }

    printf("1st min element is: %d\n2nd min element is: %d\n", first, second);

}


int main()
{
    int a[8] = {5,3,4,1,1,-1,13,0};
    
    find2smallest(a,8);

    return 0;
}