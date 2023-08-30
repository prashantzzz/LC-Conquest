class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,vector<int>>mp;
        for(int i=0; i<nums.size(); i++){
            if(!mp[nums[i]].empty()) mp[nums[i]].push_back(i);
            else {
                vector<int>arr;
                arr.push_back(i);
                mp[nums[i]]=arr;
            }
        }
        vector<int>arr;
        
        for(int i=0; i<nums.size(); i++) {
            int tmp=target-nums[i];
            if(!mp[tmp].empty() && i!=mp[tmp][0]){
                arr.push_back(i);
                arr.push_back(mp[tmp][0]);
                break;
            }
        }
        
        return arr;
    }
};