class Solution {
public:
    // double myPow1(double x, int n,double& ans ){
    //     if(n==0){
    //         return 1;
    //     } 
    //     ans = ans*(1/x*(myPow1(x,n+1,ans)));
    //     return ans;
    // }
    double myPow(double x, int n) {
        // double ans = 1;
        // if(n<0) return myPow1(x,n,ans);
        // else{
            if(n==0){
                return 1;
            }
            return pow(x,n);
        // }
    }
};