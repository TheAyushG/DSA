class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();
        //Time complexity = O(n)
        //Space complexity  = O(1)

        int count = 1;
        int ele = nums[0];

        for(int i=1; i<n; i++){
            if(ele == nums[i]){
                count++;
            }

            else if(count == 0){
            ele = nums[i];
                count = 1;
            }

            else{
                count--;
            }
        }

        int count1 = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == ele){
            count1++;
            }
        }

        if(count1 > n/2){
            return ele;
        }

        return -1;
    }
};

------------------------------------------------------------

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> map;
        int n = nums.size();
        int majority = 0;
        int ans = 0;

        for(int i=0; i<n; i++){
            int x = nums[i];
            map[x]++;
        }

        for(auto it : map){
            if(it.second > majority){
                majority = it.second;
                ans = it.first;
            }   
        }
       return ans;
    }
};

------------------------------------------------------------
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
       
    }
};
