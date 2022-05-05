/*
Implementation to find duplicate element in hash set
*/

#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_set<int> hset;
        
        for(auto i = nums.begin(); i != nums.end(); ++i)
        {
            if( hset.find(*i) == hset.end())
                hset.insert( *i );
            else
                return true;
        }
        
        return false;
    }
};