1. Check if first row originally has a zero.
2. Check if first column originally has a zero.
3. Use first row and first column as markers.
4. Mark rows and columns that need to become zero.
5. Update inner cells using the markers.
6. Finally handle the first row and first column separately.

-----------------------------------------------------------------
Optimal Solution
Time  - O(m*n) ----> O(n) + O(m) + O(m×n) + O(m×n) + O(n) + O(m)
Space - O(1)
-----------------------------------------------------------------
    
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int m = matrix.size();
        int n = matrix[0].size();

        bool firstRowImpact = false;
        bool firstColImpact = false;

        //Check first row is impacted or not
        for(int col=0; col<n; col++){
            if(matrix[0][col] == 0){
                firstRowImpact = true;
                break;
            }
        }

        //Check first Col is impacted or not
        for(int row=0; row<m; row++){
            if(matrix[row][0] == 0){
                firstColImpact = true;
                break;
            }
        }

        //Mark rows and columns using first row and first column
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(matrix[i][j] == 0){
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        //Set matrix elements to 0 based on markers
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(matrix[0][j] == 0 || matrix[i][0] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        //Make entire first row zero if it was impacted
        if(firstRowImpact){
            for(int j=0; j<n; j++){
                matrix[0][j] = 0;
            }
        }

        //Make entire first column zero if it was impacted
        if(firstColImpact){
            for(int i=0; i<m; i++){
                matrix[i][0] = 0;
            }
        }

    }
};



*****************************************************************************************************************************************************************************************************************************
    


-------------------------------------------------
Time	- O(m × n) + O(m × n)
Space	- O(m) + O(n)
-------------------------------------------------

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        

        int m = matrix.size();
        int n = matrix[0].size();

        vector<bool> row(m, false);
        vector<bool> col(n, false);

        for(int i=0; i<m; i++){
            for(int j = 0; j<n; j++){ 
                if(matrix[i][j] == 0){
                    row[i] = true;
                    col[j] = true;
                }
            }
        }

        for(int i=0; i<m; i++){
            for(int j = 0; j<n; j++){ 
                if(row[i] == true || col[j] == true){
                    matrix[i][j] = 0;
                }
            }
        }

    }
};




*****************************************************************************************************************************************************************************************************************************



-------------------------------------------------
Time	O(n × m × (n + m))
Space	O(n × m)
-------------------------------------------------

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> temp = matrix;

        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){

                    for(int k=0; k<m; k++){
                        temp[i][k] = 0;
                    }

                    for(int k=0; k<n; k++){
                        temp[k][j] = 0;
                    }
                }
            }
        }

        matrix = temp;
    }
};
