class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans;

        for(int i=0; i<n; i++){
            int index = abs(nums[i]) - 1;

            if(nums[index] < 0){
                ans.push_back(index + 1);
            }

            else{
            nums[index] = -nums[index];
            }
        }

        return ans;
    }
};



class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        unordered_map<int,int> map;
        int n = nums.size();

        for(int i=0; i<n; i++){
            int x = nums[i];
            map[x]++;
        }
        
        vector<int> ans;
        for(auto it : map){
            if(it.second > 1)
           ans.push_back(it.first);
        }
       
       return ans;
    }
};
