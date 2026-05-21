Time - O(n)
space - O(1)
--------------------------------------------------
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        
        int n = arr.size()+1;
        
        int xor1 = 0;
        int xor2 = 0;
        
        for(int i=0; i<n-1; i++){
            xor2 = xor2 ^ arr[i];
            xor1 = xor1 ^ (i+1);
        }
        
        xor1 = xor1 ^ n;
        
        return xor1 ^ xor2;
    }
};


****************************************************************************************************************************************

Issue is, talal = n*(n+1)/2 when we calculate large number in this then it will becaome very large

class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        
        long long n = arr.size()+1;
        
        long long total = n*(n+1)/2;
        
        int sum = 0;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
        }
        
        return total - sum;
    }
};
