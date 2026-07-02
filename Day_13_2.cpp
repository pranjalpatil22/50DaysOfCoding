class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         int matrixSize = matrix.size();

        
        for(int i = 0; i < matrixSize; i++)
        {
            for(int j = i; j < matrixSize; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        
        for(int i = 0; i < matrixSize; i++)
        {
            int start = 0;
            int end = matrixSize - 1;

            while(start < end)
            {
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }
        }
    }
};
