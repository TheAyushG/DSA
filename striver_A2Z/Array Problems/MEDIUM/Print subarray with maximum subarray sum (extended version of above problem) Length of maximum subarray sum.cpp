class Solution {
public:

    int maxSubArrayLength(vector<int>& nums) {

        int n = nums.size();

        long long sum = 0;
        long long maxSum = LONG_MIN;

        int currLength = 0;
        int maxLength = 0;

        for(int i = 0; i < n; i++) {

            sum += nums[i];
            currLength++;

            // update answer
            if(sum > maxSum) {

                maxSum = sum;
                maxLength = max(currLength, maxLength);
            }

            // reset if sum becomes negative
            if(sum < 0) {

                sum = 0;
                currLength = 0;
            }
        }

        return maxLength;
    }
};
