class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        int xor1 = 0, xor2 = 0;

        for(int i=0; i<=n; i++){
            xor1 ^= i;
        }

        for(int i=0; i<n; i++){
            xor2 ^= nums[i];
        }

        return xor1 ^ xor2;
    }    
};


-----------------------------------------------

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        int total = n * (n+1) / 2;

        int sum = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
        }

        return total - sum;
    }
};


------------------------------------------------


class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        sort(nums.begin(), nums.end());

        if(nums[0] != 0)
        return 0;

        for(int i=0; i<n-1; i++){
            if(nums[i] + 1 != nums[i+1]){
            return nums[i] + 1;
            }
        }

        return n;
    }
};
