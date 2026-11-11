class Solution {
public:
    int jump(vector<int>& nums) {
        // 2 3 1 1 4
        // 2 3 3 3 4
        // 2 4 4 4 8
        if(nums[0]==0)  return 0;
        if(nums[0] == nums.size()-1) return 1;

        int n = nums.size();
        for(int i = 1;i<n;i++){
            nums[i] = max(nums[i]+i,nums[i-1]);
        }
        int idx = 0;
        int ans = 0;
        while(idx < n-1){
            ans++;
            idx = nums[idx];
        }
        return ans;

    }
};