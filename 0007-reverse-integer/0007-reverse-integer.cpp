class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        ::reverse(s.begin(), s.end());
        long long reversed_x = stoll(s);
        if (reversed_x > INT_MAX || reversed_x < INT_MIN) {
            return 0;  // Return 0 if overflow
        }
        if(x<0)reversed_x*=-1;
        return reversed_x;
    }
};