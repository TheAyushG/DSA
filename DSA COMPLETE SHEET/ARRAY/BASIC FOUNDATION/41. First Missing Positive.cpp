Time - o(n)
space - O(1)
-------------------------------------------------------------

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();
        bool contains1 = false;

        for(int i=0; i<n; i++){
            if(nums[i] == 1){
                contains1 = true;
            }

            if(nums[i] <= 0 || nums[i] > n){
                nums[i] = 1;
            }
        }

        if(contains1 == false){
            return 1;
        }

        for(int i=0; i<n; i++){

            int num = abs(nums[i]);

            int idx = num - 1;

            if(nums[idx] < 0)
            continue;

            nums[idx] *= -1;
        }

        for(int i=0; i<n; i++){
            if(nums[i] > 0){
                return i+1;
            }
        }

        return n+1;
    }
};
-------------------------------------------------------------





Time - o(n)
space - O(n)
    
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();
        vector <bool> seen(n+1, false);

        for(int i=0; i<n; i++){
            if(nums[i] > 0 && nums[i] <= n){
                seen[nums[i]] = true;
            }
        }

        for(int i=1; i <=n; i++){
            if(seen[i] == false)
            return i;
        }

        return n+1;
    }
};
