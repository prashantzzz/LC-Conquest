class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int s=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=val) s++;
            else {
                nums.erase(nums.begin()+i);
                i--;}
        }
        return s++;
    }
};