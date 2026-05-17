class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        
        int n = arr.size();
        int largest = arr[0];
        int secondLargest = INT_MIN;
        
        for(int i=1; i<n; i++){
            
            if(arr[i] > largest){
                secondLargest = largest;
                largest = arr[i];
            }
            
            else if(arr[i] < largest && arr[i] > secondLargest) {
                secondLargest = arr[i];
            }
        }
        
        if(secondLargest == INT_MIN)
        return -1;
        
        return secondLargest;
    }
};
