This code is correct soluiton when we have negative values and zeros in array
-------------------------------------------------------------------
Time  -	O(n log n)
Space -	O(n)
-------------------------------------------------------------------

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        
        int n = arr.size();
        
        map <long long, int> preSumMap;

        long long sum = 0;
        int maxLength = 0;
        
        for(int i=0; i<n; i++){
            
            sum += arr[i];
            
            if(sum == k){
                maxLength = max(maxLength, i+1);
            }
            
            long long rem = sum - k;
            
            if(preSumMap.find(rem) != preSumMap.end()){
                int len = i - preSumMap[rem];
                maxLength = max(maxLength, len);
            }
            
            if(preSumMap.find(sum) == preSumMap.end()){
                preSumMap[sum] = i;
            }
        }
        
        return maxLength;
    }
};


*****************************************************************************************************************************************************


------------------------------------------------------------------------
This code is correct soluiton when we have only positive values in array
------------------------------------------------------------------------

class Solution {
  public:
    int longestSubarray(vector<int>& a, long long k) {

    int left = 0, right = 0;

    long long sum = a[0];

    int maxLen = 0;

    int n = a.size();

    while(right < n) {

        while(left <= right && sum > k) {

            sum -= a[left];
            left++;
        }

        if(sum == k) {

            maxLen = max(maxLen, right - left + 1);
        }

        right++;

        if(right < n) {
            sum += a[right];
        }
    }

        return maxLen;
    }
};


*****************************************************************************************************************************************************


--------------------------------------------------
Brute force solution
--------------------------------------------------

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        
        int n = arr.size();
        
        int length = 0;
        
        for(int i=0; i<n; i++){
            
        long long sum = 0;
            
            for(int j=i; j<n; j++){
                sum += arr[j];
                if(sum == k){
                    length = max(length, j-i+1);
                }
            }
        }
        return length;
        
    }
};
