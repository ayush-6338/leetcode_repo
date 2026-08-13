class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int mxReach = 0;
        for(int i = 0;i<n;i++){
            if(i>mxReach) return false;
            int val = i + nums[i];
            mxReach = max(mxReach,val);
        }
        return true;
    }
};