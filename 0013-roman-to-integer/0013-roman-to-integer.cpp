class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mp;
        mp['I']=1; mp['C']=100; mp['L']=50;
        mp['V']=5; mp['D']=500;
        mp['X']=10; mp['M']=1000;
        int ans=0;
        ans+=mp[s[s.length()-1]];
        for(int i=s.length()-2; i>=0; i--){
            if(mp[s[i]]>=mp[s[i+1]]) ans+=mp[s[i]];
            else ans-=mp[s[i]];
        }
        return ans;
    }
};