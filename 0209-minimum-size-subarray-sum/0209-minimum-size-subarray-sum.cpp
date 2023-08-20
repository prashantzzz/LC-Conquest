class Solution{
public:
    int minSubArrayLen(int target, vector<int>& nums){
        int min_len=INT_MAX, l=0, r=0, sum=0;
        for(r=0; r<nums.size(); r++){
            sum+=nums[r];
            while(sum>=target){
                min_len=min(min_len,r-l+1);
                sum-=nums[l];
                l++;

            }
        }

        if(min_len==INT_MAX)return 0;
        return min_len;

    }
};