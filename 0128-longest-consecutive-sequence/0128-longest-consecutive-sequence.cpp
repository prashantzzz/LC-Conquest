class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<2)return nums.size();
        set <int>mp;
        //filling up the hashmap
        for(int i=0; i<nums.size(); i++){ 
            mp.insert(nums[i]);
        }
        nums.clear();
        for(auto i:mp){ 
            nums.push_back(i);
        }
        int max_len=0;
        int temp=0;
        int fp=1,sp=0;
        //sliding window
        for(int i=0; i<nums.size(); i++){ 
            if(nums[sp]+fp-sp==nums[fp]){
                fp++;
                temp++;
            }
            else {
                sp=fp;
                fp++;
                if(max_len<temp)max_len=temp;
                temp=0; 
            }  
            if(fp>=nums.size()){
                if(max_len<temp)max_len=temp;
                break;
            }
            
        }
        return ++max_len;
    }
};