class Solution {
public:
    int rec(vector<int>& nums,vector<int>& dp,int idx){
        if(idx == 0) return nums[0];
        if(idx < 0) return 0;

        if(dp[idx] != -1) return dp[idx];

        int rob = nums[idx] + rec(nums,dp,idx-2);
        int skip = rec(nums,dp,idx-1);
        return dp[idx] = max(rob,skip);

    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return rec(nums,dp,nums.size()-1);
    }
};