class Solution {
private: 
    int reverse(int n){
        int ans = 0;
        while(n>0){
            ans = (ans*10+(n%10));
            n = n/10;
        }
        cout<<ans<<endl;
        return ans;
    }
public:
    int mirrorDistance(int n) {
        return abs(n-reverse(n));
    }
};