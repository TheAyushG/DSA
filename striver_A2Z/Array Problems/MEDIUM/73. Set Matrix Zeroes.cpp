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
