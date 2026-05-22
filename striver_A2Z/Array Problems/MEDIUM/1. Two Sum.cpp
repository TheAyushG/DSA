-------------------------------------------------------
In this solution we are using map
Time  - O(n)
Space - O(n)
-------------------------------------------------------

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();
        map<int,int> map;
        
        for(int i=0; i<n; i++){
            int diff = target - nums[i];

            if(map.find(diff) != map.end()){
                return {map[diff], i};
            }

            map[nums[i]] = i;
        }

        return {};
    }
};


***************************************************************************************************************************************************

-----------------------------------------------------------------------------------------------
Time	- O(n log n)
Space	- O(n)
-----------------------------------------------------------------------------------------------

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {


        vector<pair<int,int>> arr;
        for(int i = 0; i < nums.size(); i++){
            arr.push_back({nums[i], i});
        }

        int n = arr.size();
        sort(arr.begin(), arr.end());

        int i = 0;
        int j = n-1;

        while(i<j){
            int sum = arr[i].first + arr[j].first;

            if(sum == target){
                return {arr[i].second, arr[j].second};
            }

            if(sum > target){
                j--;
            }

            else{
                i++;
            }
        }

        return {};
    }
};
