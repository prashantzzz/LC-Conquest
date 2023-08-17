class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int s=0;
        int p=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=val)s++;
            else nums[i]=-1;
        }  
        sort(nums.begin(),nums.end(),greater<int>());
        return s;
    }

};