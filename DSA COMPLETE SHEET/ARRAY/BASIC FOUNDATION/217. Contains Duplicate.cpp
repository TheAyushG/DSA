-------------------------------
Time Complexity: O(n log n)
Space Complexity: O(log n)
-------------------------------

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

       int n = nums.size();
       sort(nums.begin(), nums.end());

       if(n <= 1)
       return false;

       for(int i=1; i<n; i++){
         if(nums[i] == nums[i-1])
         return true;
       }

       return false;
    }
};

*******************************************************************************************************************************************

-------------
Time - O(n)
Space - O(n)
-------------
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        int n = nums.size();
       unordered_map<int,int> map;

       for(int i=0; i<n; i++){
        map[nums[i]]++;
       }
       
       for(auto p: map){
        if(p.second > 1){
            return true;
        }
       }

       return false;
    }
};
