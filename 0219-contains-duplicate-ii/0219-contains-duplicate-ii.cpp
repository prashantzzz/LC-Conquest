class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int j=0;
        unordered_map<int,int>mp;
        mp[nums[0]]=1;
        for(int i=1; i<nums.size(); i++){
            if ((i-j)>k) {
                mp[nums[j]]=0;
                j++;
            }
            if(mp[nums[i]] && (i-j)<=k) return true;
            cout<<i<<" - "<<j<<endl;
            mp[nums[i]]++;
        }
        return false;
    }
};