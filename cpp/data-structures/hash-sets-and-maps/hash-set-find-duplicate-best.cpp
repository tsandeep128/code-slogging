#include<vector>
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_map<int,int> count;
        for(int i = 0; i < nums.size() ; i++){
            if(count[nums[i]] != 0)
                return true;
            else
                count[nums[i]] +=1;
        }
        return false;
    }
};
