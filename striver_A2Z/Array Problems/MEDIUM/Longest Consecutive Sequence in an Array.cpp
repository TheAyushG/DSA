-----------------------------------------------
Optimal solution
Time	- O(3n) avergae O(n)
Space	- O(n)
-----------------------------------------------

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();
        int longest = 1;
        int count = 0;

        unordered_set<int> st;

        if(n == 0)
        return 0;

        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }

        for(auto it : st){
            if(st.find(it - 1) == st.end()){
                count = 1;
                int x = it;

                while(st.find(x+1) != st.end()){
                    x = x+1;
                    count = count + 1;
                }

                longest = max(longest, count);
            }
        }
        
        return longest;
    }
};



****************************************************************************************************************************************************************************************************************************


---------------------------------------------------
Better solution
Time	O(n log n)
Space	O(log n) (technical)
---------------------------------------------------

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int n = nums.size();
        int lastSmaller = INT_MIN;
        int maxLength = 1;
        int count = 0;

        if(n == 0)
        return 0;

        for(int i=0; i<n; i++){

            if(nums[i] - 1 == lastSmaller){
                count++;
                lastSmaller = nums[i];
            }

            else if(nums[i] != lastSmaller){
                count = 1;
                lastSmaller = nums[i];
            }

            maxLength = max(maxLength, count);
        }
        
        return maxLength;
    }
};




****************************************************************************************************************************************************************************************************************************


-----------------------------------------------------
Brute Force
Time  - O(n²)
Space - O(1)
-----------------------------------------------------

class Solution {
public:
    bool linearSearch(vector<int> &nums, int target){

        int n = nums.size();

        for(int i=0; i<n; i++){
            if(nums[i] == target){
                return true;
            }
        }

        return false;
    }

    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();
        int longest = 0;

        for(int i=0; i<n; i++){
            
            int x = nums[i];

            int count = 1;

            while(linearSearch(nums, x+1) == true){
                x = x+1;
                count++;
            }

            longest = max(longest, count);

            }

        return longest;
    }
};
