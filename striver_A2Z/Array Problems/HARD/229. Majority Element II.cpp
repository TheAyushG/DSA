class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n = nums.size();
        
        unordered_map<int,int> map;
        vector<int> ans;

        for(int i=0; i<n; i++){
            map[nums[i]]++;
        }

        for(auto it : map){
            if(it.second > n/3){
                ans.push_back(it.first);
            }
        }
        
        return ans;
    }
};
