#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> g1;

    for (int i=1; i<=5; i++)
        g1.push_back(i);                                //initialize vector with values 1 to 5

    //begin = iterator pointing to first element of vector
    //end = iterator pointing to theoretical element that follows the last element of vector
    cout<<"begin: "<<*(g1.begin())<<" "<<"end: "<<*(g1.end())<<"\n";
    cout<<"Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i )
        cout<< *i<<" ";

    //cbegin = constant iterator pointing to first element of vector
    //cend = constant iterator pointing to theoretical element that follows the last element of vector
    cout<<"\n cbegin: "<<*(g1.cbegin())<<" "<<"cend: "<<*(g1.cend())<<"\n";
    cout<<"Output of cbegin and cend: ";
    for(auto i=g1.cbegin(); i != g1.cend(); ++i)
        cout<< *i<<" ";

    //rbegin = reverse iterator to first element (reverse beginning)
    //rend = reverse iterator to last element (reverse beginning)
    cout<<"\n rbegin: "<<*(g1.rbegin())<<" "<<"rend: "<<*(g1.rend())<<"\n";
    cout<<"Output of rbegin and rend: ";
    for(auto i=g1.rbegin(); i!= g1.rend(); ++i)
        cout<< *i<<" ";

    //crbegin = constant reverse iterator
    //crend = constant reverse iterator
    cout<<"\n crbegin: "<<*(g1.crbegin())<<" "<<"crend: "<<*(g1.crend())<<"\n";
    cout<<"Output of crbegin and crend: ";
    for(auto i=g1.crbegin(); i!= g1.crend(); ++i)
        cout<<*i<<" ";

    cout<<"\n";

    return 0;
}
