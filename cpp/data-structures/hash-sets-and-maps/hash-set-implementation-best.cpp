/*
Fastest implementation of hash set
*/

#include<iostream>
#include<vector>

//using namespace std;

class MyHashSet {
    std::vector<bool> values;
    
public:
    MyHashSet() {
        std::cin.tie(nullptr);
        std::ios::sync_with_stdio(false);
        values.reserve(1000000);
    }
    
    void add(int key) {
        if(key >= values.size())
            values.resize(key + 1);
        values[key] = true;
    }
    
    void remove(int key) {
        if(values.size() <= key)
            return;
        values[key] = false;
    }
    
    bool contains(int key) {
        if(values.size() <= key)
            return false;
        return values[key];
    }
};
