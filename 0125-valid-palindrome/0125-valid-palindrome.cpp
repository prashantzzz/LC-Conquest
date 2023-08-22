class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        
        //cout<<int('A')<<" "<<int('a');
        for(int i=0; i<s.length(); i++){
            if( (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9') )temp+=s[i];
            else if(s[i]>='A' && s[i]<='Z'){
                temp+=(s[i]+32);
            }
            //if(s[i]=='.')s.erase(i, 1);
        }
        //cout<<s<<" "<<temp;
        //if(temp.length()==1 && s.length()!=1)return false;
        s=temp;
        reverse(temp.begin(),temp.end());
        return s==temp;
    }
};