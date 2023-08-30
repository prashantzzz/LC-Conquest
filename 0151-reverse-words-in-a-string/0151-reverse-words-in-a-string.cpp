class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string temp;
        for(int i=0; i<s.length()+1; i++){
            if(s[i]==' ' && s[i+1]!=' ' || i==s.length()){
                
                st.push(temp); 
                //cout<<temp<<" ";
                temp="";
            }
            else 
            temp+=s[i];
        }
        s="";
        while(!st.empty()){
            s+=st.top();
            st.pop();
            if(!st.empty()) s+=' ';
        }
        for(int i=0; i<s.length()-1; i++){ //extra spaces
            if(s[i]==' ' && s[i+1]==' '){
                s.erase(i, 1);
                i--;
            }
        }
        //trimming
        while(s[0]==' '){
            s.erase(0, 1);
        }
        int i=s.length()-1;
        while(s[i]==' '){
            s.erase(i, 1);
            i--;
        }
        return s;
    }
};