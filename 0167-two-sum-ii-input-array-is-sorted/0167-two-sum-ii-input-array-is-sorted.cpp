class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int l=0,r=arr.size()-1;
        int n=arr.size();
        
        vector<int>ans;
        while(r!=l){
            if((arr[l]+arr[r])==target){
                ans.push_back(l+1);
                ans.push_back(r+1);
                break;
            }
            else if((arr[l]+arr[r])>target) r--;
            else l++;
        }
        return ans;
    }
};