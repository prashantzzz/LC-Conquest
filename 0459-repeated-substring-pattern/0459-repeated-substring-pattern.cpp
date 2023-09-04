class Solution {
public:
    bool is_true(int j,string s){
        string temp=s.substr(0,j),add=temp;
        while(temp.length()<s.length()){
            temp+=add;
        }
        if(temp==s)return true;
        return false;
    }
    bool repeatedSubstringPattern(string s) {
        int i=0,j=1;
        while(j<s.length()){
            if(s[i]!=s[j]) {i=0; j++;}
            else {
                if( s.length()%j==0 && is_true(j,s))return true;
                else j++;
            }
                
        }
        return false;
    }
};
