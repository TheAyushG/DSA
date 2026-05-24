---------------------------------------
Optimal Solution
Time - O(n)
Space - O(1)
---------------------------------------

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();
        long long maxSum = LONG_MIN;
        long long sum = 0;

        int maxLength = 0;

        for(int i=0; i<n; i++){
            sum += nums[i];

            if(sum > maxSum){
                maxSum = sum;
            }

            if(sum < 0){
                sum = 0;
            }
        }

        return maxSum;
    }
};


*****************************************************************************************************************************************************************************************************************************

---------------------------------------
Optimal Solution
Time - O(n)
Space - O(1)
---------------------------------------

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();

        int currMaxSum = nums[0];
        int maxSum = nums[0];

        for(int i=1; i<n; i++){
            currMaxSum = max(nums[i], currMaxSum + nums[i]);
            maxSum = max(currMaxSum, maxSum);
        }

        return maxSum;
    }
};


*****************************************************************************************************************************************************************************************************************************

---------------------------------------
Time - O(n^2)
Space - O(1)

Brute force
---------------------------------------

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();

        int maxSum = nums[0];

        for(int i=0; i<n; i++){
            int sum = 0;

            for(int j=i; j<n; j++){
                sum += nums[j];

                maxSum = max(maxSum, sum);
            }
        }

        return maxSum;
    }
};
