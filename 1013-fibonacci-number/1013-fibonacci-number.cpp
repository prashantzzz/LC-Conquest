class Solution {
public:
    int sum=0;
    int fib(int n) {
        vector<int>ans;
        if(n<2)return n;
        int a=0,b=1,c,sum=0;
        for(int i=0; i<n; i++){
            c=a+b;
            ans.push_back(c);
            a=b;
            b=c;
        }
        //for(int i=0; i<ans.size(); i++)cout<<ans[i]<<" ";
        return ans[ans.size()-2];
    }
};