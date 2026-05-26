-------------------------------------------------------------------------------------
Optimal solution, better then brute force because in brute froce we were use 3 array
Time	- O(n)
Space	- O(n)
--------------------------------------------------

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n);

        int p = 0;
        int n = 1;

        for(int i=0; i<n; i++){
            
            if(nums[i] > 0){
                ans[p] = nums[i];

                p += 2;
            }

            else{
                ans[n] = nums[i];
                n += 2;
            }
        }

        return ans;
    }
};



******************************************************************************************************************************************************************************************************************************


---------------------------------------------------
BRUTE FORCE SOLUTION, we are using 3 arrays
Time	- O(n)
Space	- O(n)
---------------------------------------------------
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size();

        vector<int> pos;
        vector<int> neg;

        for(int i=0; i<n; i++){
            if(nums[i] > 0){
                pos.push_back(nums[i]);
            }

            else{
                neg.push_back(nums[i]);
            }
        }

        int i = 0;
        int j = 0;
        
        vector<int> ans;

        while(i<pos.size()){
            ans.push_back(pos[i]);
            i++;
            ans.push_back(neg[j]);
            j++;
        }

        return ans;
        
    }
};
