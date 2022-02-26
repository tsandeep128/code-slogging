#include<iostream>
#include<vector>

using namespace std;

int main()
{
    const int n = 5;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int singleNum = 0;

    for(int i=0; i<n;i++)
    {
        singleNum = singleNum ^ arr[i];
    }
    cout<<"single num: "<<singleNum;

    return 0;
}