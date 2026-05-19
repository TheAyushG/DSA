Time  - O(n)
space - O(1)
-----------------------------------
class Solution {
public:
    bool check(vector<int>& nums) {

    int n = nums.size();

    int count = 0;

    for(int i=0; i<n; i++){
        if(nums[i] > nums[(i+1) % n]){
            count++;
        }
    }

    if(count <= 1){
        return true;
    }

    return false;
        
    }
};



***************************************************************************




Time  - O(n^2)
space - O(n)
-------------------------------------------

class Solution {
public:
    
    bool isSorted(vector<int> &temp){

        for(int i=0; i<temp.size()-1; i++){
            if(temp[i] > temp[i+1])
            return false;
        }

        return true;
    }
    
    bool check(vector<int>& nums) {

    int n = nums.size();
    for(int k=0; k<n; k++){

        vector<int> temp;

        for(int i=0; i<n; i++){

            temp.push_back(nums[(i+k) % n]);
        }

        if(isSorted(temp)){
            return true;
        }
    }

    return false;
        
    }
};
