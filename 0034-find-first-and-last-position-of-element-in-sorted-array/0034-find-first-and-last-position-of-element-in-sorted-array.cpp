class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans={n,n};
        for(int i=0; i<n; i++){
            if(nums[i]==target) {
                if(i<ans[0])ans={i,i};
                if(i>ans[1])ans[1]=i;
            }
        }
        if(ans[0]==n) return {-1,-1};
        return ans;
    }
};