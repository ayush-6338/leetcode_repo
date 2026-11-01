class Solution {
public:
    bool isPrime(int n){
        if(n == 1) return false;
        for(int i = 2 ;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        int ans = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(j == i && isPrime(nums[i][j])){
                    ans = max(ans,nums[i][j]);
                }
                if(j == nums.size()-i-1 && isPrime(nums[i][j])){
                    ans = max(ans,nums[i][j]);
                }
            }
        }
        return ans;

    }
};