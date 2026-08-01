class Solution {
  public:

    int findSum(vector<int>& arr, int divisor){

        int sum = 0;

        for(int i = 0; i < arr.size(); i++){
            sum += (arr[i] + divisor - 1) / divisor;
        }

        return sum;
    }

    int smallestDivisor(vector<int>& arr, int k) {

        int low = 1;
        int high = *max_element(arr.begin(), arr.end());

        while(low <= high){

            int mid = low + (high - low) / 2;

            int sum = findSum(arr, mid);

            if(sum <= k){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return low;
    }
};
