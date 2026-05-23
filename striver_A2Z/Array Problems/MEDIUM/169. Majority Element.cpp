---------------------------------------------
Time - O(n)
Space - O(1)
---------------------------------------------

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();

        int ele = nums[0];
        int count = 1;
        int i=1;
        
        while(i<n){
            if(nums[i] == ele){
                count++;
            }

            else if(nums[i] != ele){
                count--;
            }

            if(count == 0){
                ele = nums[i];
                count = 1;
            }

            i++;
        }

        return ele;
    }
};


*************************************************************************************************************************************************************************************************


---------------------------------------------
Time - O(n log n)
Space - O(n)
---------------------------------------------

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();
        map<int,int> mp;

        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }

        for(auto it : mp){
            if(it.second > n/2){
                return it.first;
                ;
            }
        }

        return -1;
    }
};


**************************************************************************************************************************************************************************************************

---------------------------------------------
Time - O(n^2)
Space - O(1)
---------------------------------------------

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();
        int count = 0;

        for(int i=0; i<n; i++){

            count = 0;
            for(int j=0; j<n; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            
        if(count > n/2){
            return nums[i];
        }
    }


        return -1;
    }
};
