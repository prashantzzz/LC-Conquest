class Solution {
public:
    double myPow(double x, long n) {
        if(n==0)return 1;
        if(n<0){ n*=-1; x=1/x;}
        
        if(n%2==0){
            double h=myPow(x,n/2);
            return h*h;
        }
        else{
            double h=myPow(x,n/2);
            return h*h*x;
        }
    }
};
//x^4= x*x*x*x