class Solution {
public:

    int power(int n,int target){
        if(n>=target) return n;
        power(pow(n,2),target);
        return -1;
    }
    bool isPowerOfTwo(int n) {
        //if(n==1)return true;
        long long ans=1,i=1;
        while(ans!=n && ans<=n){
            ans*=2;
            i++;
        }
        if(n==ans)return 1;
        return 0;
    }
};