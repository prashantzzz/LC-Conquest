class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min_len=INT_MAX, j=0, i=0, sum=0;
        for(i=0; i<nums.size(); i++){
            if(sum<target) {
                sum+=nums[i];
                cout<<"+"<<nums[i];
            }
            else if(sum>=target) {
                min_len=min(min_len,i-j);
                i--;
                sum-=nums[j];
                cout<<endl<<"-"<<nums[j];
                j++;
            }
        }
        int n=nums.size();
        for(int i=j;i<nums.size();i++){
            if(sum>=target) {
                min_len=min(min_len,n-j);
                j++;
                sum-=nums[i];
            }
            if(sum<target)break;
        }
        
        cout<<endl<<sum<<" j="<<j<<endl;
        if(min_len==INT_MAX) return 0;
        return min_len;
    }
};