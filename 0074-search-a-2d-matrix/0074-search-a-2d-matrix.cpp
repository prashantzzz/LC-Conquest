class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int rows=arr.size(), cols=arr[0].size();
        for(int i=0; i<rows; i++){
            if(target>arr[i][0]-1 && target<arr[i][cols-1]+1){
                for(int j=0; j<cols; j++){
                    if(arr[i][j]==target)return true;
                }
            }
        }
        return false;
    }
};