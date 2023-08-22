class Solution {
public:
    bool isSubsequence(string s, string t) {
        int p=0;
        for(int i=0; i<t.length(); i++){
            if(t[i]==s[p])p++;
        }
        if(p!=s.length())return false;
        return true;
    }
};