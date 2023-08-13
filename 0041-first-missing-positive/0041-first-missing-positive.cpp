class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int reqd=1;
        //replacing +ve duplicates with -1
        for(int i=0; i<nums.size()-1; i++){ 
            if(nums[i]>0 && nums[i]==nums[i+1])nums[i]=-1;
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                if(nums[i]!=reqd) return reqd;
                reqd++; //for duplications
            }
        }
        return reqd;
    }
};