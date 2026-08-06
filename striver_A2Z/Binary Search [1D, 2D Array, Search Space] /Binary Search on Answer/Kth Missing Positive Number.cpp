class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
    int n = arr.size();
    int mid = -1;
    int l = 0;
    int r = n-1;

    while(l <= r){
        int mid = l + (r-l)/2;
        
        int kitne_missing_till_mid = arr[mid] - (mid+1);

        if(kitne_missing_till_mid < k){
            l = mid + 1;
        } 

        else{
            r = mid - 1;
        }
    }

    return l+k;

    }
};




// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
        
//     int n = arr.size();
//     int num = 1;
//     int i = 0;

//         while(i < n  && k > 0){

//             if(arr[i] == num){
//                 i++;
//             }

//             else{
//                 k--;
//             }

//             num++;
//         }

//         while(k--){
//             num++;
//         }

//         return num-1;

//     }
// };





// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
        
//     int current = 1;
//         int i = 0;

//         while(k > 0){

//             if(i < arr.size() && arr[i] == current){
//                 i++;
//             }

//             else{
//                 k--;

//                 if(k == 0){
//                     return current;
//                 }
//             }

//             current++;
//         }

//         return current;

//     }
// };
