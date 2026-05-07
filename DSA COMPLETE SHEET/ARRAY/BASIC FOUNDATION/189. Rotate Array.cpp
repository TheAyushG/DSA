Time - O(n) + O(k) + O(n-k) ---> O(2n) ----> O(n)
space - o(1)
----------------------------------------------------

class Solution {
    void rev(vector<int>& nums, int start, int end){
        while(start <= end){
            int temp = nums[end];
            nums[end] = nums[start];
            nums[start] = temp;

            start++;
            end--;
        }
    }

    public:
        void rotate(vector<int>& nums, int k) {

        int n = nums.size();

    if(n == 0) return;

    k = k % n;

    rev(nums, 0, n-1);
    rev(nums, 0, k-1);
    rev(nums, k, n-1);

    }
};
