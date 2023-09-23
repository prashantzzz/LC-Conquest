class Solution {
public:
    int bin(vector<int>& nums,int target, int i){
        if(nums[i]==target) return i;
        if(nums[i]<target) i++;
        else if(nums[i]>target) i--;
        return 0;
    }
    int searchInsert(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        while(i<nums.size()){
            if(nums[i]>=target)return i;
            i++;
        }
        return nums.size();
    }
};