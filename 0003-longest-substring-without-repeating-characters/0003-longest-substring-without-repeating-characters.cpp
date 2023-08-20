class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int l=0,r=0,max_len=0,pl=0;
        for(r=0; r<s.length(); r++){
            if(mp[s[r]]){ //if [r] exists, shrink 
                pl=l;
                l=mp[s[r]];
                cout<<" dup found for "<<s[r]<<" l="<<l<<endl;
                for(int i=pl; i<l;i++)mp[s[i]]=0; 
            } 
            else{
                //cout<<"no dup for "<<s[r]<<endl;
                max_len=max(r-l+1,max_len);
            }
            mp[s[r]]=r+1;
            for(int i=l; i<r+1;i++) cout<<s[i];
            cout<<endl;

        }
        return max_len;
    }
};