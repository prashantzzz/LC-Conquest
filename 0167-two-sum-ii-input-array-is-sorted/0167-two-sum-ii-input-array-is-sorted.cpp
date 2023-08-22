class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0; i<n; i++){
            mp[nums[i]]=i+1; //element:it's index
        }
        vector<int>ans;
        for(int i=0; i<n; i++){
            int temp=target-nums[i];
            if(mp[temp]){
                ans.push_back(min(mp[temp],i+1));
                ans.push_back(max(mp[temp],i+1));
                break;
            }
        }
        return ans;
    }
};