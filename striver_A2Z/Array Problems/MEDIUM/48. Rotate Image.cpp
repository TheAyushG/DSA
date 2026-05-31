----------------------------------------------
Optimal Solution
Time	- O(n²)
Space	- O(1)
----------------------------------------------

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

    int n = matrix.size();

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i=0; i<n; i++){

        int l = 0;
        int r = n-1;

        while(l<r){
            int temp = matrix[i][r];
            matrix[i][r] = matrix[i][l];
            matrix[i][l] = temp;
            l++;
            r--;
        }
    }

    }
};



*****************************************************************************************************************************************************************************************************************************



----------------------------------------------
Brute Force or Better Solution
Time	O(n²)
Space	O(n²)
----------------------------------------------

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

    int n = matrix.size();

    vector<vector<int>> temp(n, vector<int>(n));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            temp[j][n-1-i] = matrix[i][j];
        }
    }

    matrix = temp;

    }
};
