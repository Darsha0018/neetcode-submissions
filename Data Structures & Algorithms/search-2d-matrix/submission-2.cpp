class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int mid = 0; 

        int left =0,right=(m*n-1);
        while(left <= right){
            mid = (left+right)/2;
            int row = mid /m;
            int col = mid% m;
            if (matrix[row][col]==target)
                return true;
            else if (matrix[row][col] < target )
                left=mid+1;
            
            else
                right=mid-1;
        }
            return false;
        
    }
};
