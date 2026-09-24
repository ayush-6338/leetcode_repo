class Solution {
    private int digitSum(int n){
        int ans = 0;
        while(n>0){
            ans += n%10;
            n = n/10;
        }
        return ans;
    }
    public int smallestIndex(int[] nums) {
        int ans = -1;
        for(int i = 0;i<nums.length;i++){
            if(digitSum(nums[i])==i){
                return i;
            }
        }
        return ans;
    }
}