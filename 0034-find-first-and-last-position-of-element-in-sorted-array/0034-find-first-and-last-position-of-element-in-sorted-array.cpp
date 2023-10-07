class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int n = nums.size();
    int start = -1;
    int end = -1;
    
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (start == -1) {
                start = i;
            }
            end = i;
        }
    }
    
    if (start == -1) {
        return {-1, -1};
    }
    
    return {start, end};
}

};