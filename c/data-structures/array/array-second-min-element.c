/*
first logic: find min element -> replace it with greatest number -> find min element again
second logic: sort array in ascending -> find 2nd different element   
*/

#include<stdio.h>
#include<limits.h>

void find2smallest( int arr[], int n)
{
    int temp;

    //sort in ascending: bubble sort - need to learn better sorting algos :P
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if ( arr[j] > arr[j+1] )
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    //find 2nd different element, otherwise print first element
    temp = arr[0];
    for(int i=1; i<n; i++)
    {
        if( arr[i] > temp)
        {
            temp = arr[i];
            break;
        }
    }

    printf("2nd min element is: %d\n", temp);

}

int main()
{
    int a[5] = {5,3,4,1,1};
    
    find2smallest(a,5);

    return 0;
}