class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int l=0,r=arr.size()-1;

        while(r!=l){
            if((arr[l]+arr[r])==target){
                return {l+1,r+1};
            }
            else if((arr[l]+arr[r])>target) r--;
            else l++;
        }
        return {0,0};
    }
};