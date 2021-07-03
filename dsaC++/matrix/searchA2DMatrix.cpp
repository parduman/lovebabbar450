class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows,i,columns,j; 
        rows = matrix.size();
        columns = matrix[0].size();
        i = 1; j = rows*columns;
        while(i <= j){
            int mid = (i + j)/2; 
            cout <<mid <<" ";
            int first = (mid-1)/columns;
            int second = (mid-1)%columns;
            int value = matrix[first][second];
            if(value < target){
                i = mid + 1;
            } else if(value == target){
                return true;
            } else {
                j = mid - 1;
            }
        }
        return false;
    }
};
