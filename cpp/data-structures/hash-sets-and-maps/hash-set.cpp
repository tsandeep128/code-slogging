/*
Basic hash set implementation
*/

long int i,n,hset[1000000]; //declare index variables and allocate memory for hash set array

class MyHashSet {
public:
    MyHashSet() {
        n = 0;              //define contructor to initialize index n to 0
    }
    
    void add(int key) {
        
        bool f = contains(key);     //check if key exists in hash set using class function
        
        if(!f)
        {
            hset[n] = key;          //if key does not exist, add the key to hash set
            n++;                    //increment index n
        }
    }
    
    void remove(int key) {
        for(i=0;i<n;i++)
        {
            if(hset[i]==key)
            {
                hset[i]=-1;         //if key exists in hash set, set it as -1; otherwise do nothing
                break;
            }
        }
    }
    
    bool contains(int key) {
        
        int flag = 0;               //initialize flag to 0

        for(i=0;i<n;i++)
        {
            if(hset[i]==key)
            {
                flag = 1;           //if key is found in hash set, set flag to 1
                break;
            }    
        }
        
        if(flag == 1)
            return true;            //return true if flag is 1
        else
            return false;           //else return false
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */