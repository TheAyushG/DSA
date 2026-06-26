--------------------------------------
Time	- O(n log n)
Space	- O(n)
--------------------------------------

class Solution {
public:

    int count = 0;

    void merge(vector<int>& arr, int l, int m, int r){
        int n1 = m-l+1;
        int n2 = r-m;
        
        int L[n1], R[n2];
        int k = l;
        
        for(int i=0; i<n1; i++){
            L[i] = arr[k];
            k++;
        }

        k = m+1;
        
        for(int j=0; j<n2; j++){
            R[j] = arr[k];
            k++;
        }
        
        
        int i=0;
        int j=0;
        
        k=l;
        
        while(i < n1 && j < n2){
            
            if(L[i] <= R[j]){
                arr[k] = L[i];
                i++;
            }
            
            else{
                arr[k] = R[j];
                j++;
            }
            
            k++;
        }
        
        while(i < n1){
            arr[k] = L[i];
            i++;
            k++;
        }
        
        while(j < n2){
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    
    
    void countPairs(vector<int> &arr, int l, int mid, int r){
        int right = mid+1;

        for(int i = l; i <= mid; i++){
            while(right <= r && arr[i] > 2LL * arr[right])
            right++;
            count += (right - (mid+1));
        }
    }

    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        
        if(l == r)
        return;
        
        int mid = l+(r-l) / 2;
        
        mergeSort(arr,l,mid);
        
        mergeSort(arr,mid+1,r);
        
        countPairs(arr, l, mid, r);
        
        merge(arr,l,mid,r);
    }


    int reversePairs(vector<int>& arr) {
        
        mergeSort(arr, 0, arr.size()-1);
        return count;
    }
};

