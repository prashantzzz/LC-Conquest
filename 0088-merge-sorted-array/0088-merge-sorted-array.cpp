class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int f=0;
        if(nums2.empty())return;
        while(f<m){
            if(nums1[f]>nums2[0]){
                int temp=nums1[f];
                nums1[f]=nums2[0];
                nums2[0]=temp;
            }
            sort(nums2.begin(),nums2.end());
            f++;
        }
        for(int i=m; i<m+n; i++){
            nums1[i]=nums2[i-m];
        }
        
    }
};