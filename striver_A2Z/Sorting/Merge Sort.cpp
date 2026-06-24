------------------------------------------------------
Complexity	Value
Time = O(n log n)
Space = O(n)
------------------------------------------------------

class Solution {
    
    void merge(vector<int>& arr, int l, int m, int r){
        int n1 = m-l+1;
        int n2 = r-m;
        
        int L[n1], R[n2];
        int k = l;
        
        for(int i=0; i<n1; i++){
            L[i] = arr[k];
            k++;
        }
        
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
    

  public:
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        
        if(l == r)
        return;
        
        int mid = l+(r-l) / 2;
        
        mergeSort(arr,l,mid);
        
        mergeSort(arr,mid+1,r);
        
        merge(arr,l,mid,r);
    }
};



============================================================================================================================================================================================================================


------------------------------------------------------
Complexity	Value
Time = O(n log n)
Space = O(n)
------------------------------------------------------


class Solution {
  public:
    void merge(vector<int>& arr, int l, int m, int r) {
        // code here
        
        int n1 = m-l+1;
        int n2 = r-m;
        
        int L[n1], R[n2];
        
        int k = l;
        
        //Fill L
        for(int i=0; i<n1; i++){
            L[i] = arr[k];
            k++;
        }
        
        //Fill R
        k = m+1;
        
        for(int i=0; i<n2; i++){
            R[i] = arr[k];
            k++;
        }
        
        //merge them in arr
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
    
    public:
    void mergeSort(vector<int>& arr, int l, int r){
        if(l >= r){
            return;
        }
        
        int m = l + (r-l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        
        merge(arr, l, m, r);
    }
};

