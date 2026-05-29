class Solution {
    public int minElement(int[] nums) {
        int ans = 36;
        for(int i : nums){
            int temp = i;
            int sum = 0;
            while(temp>0){
                sum += temp%10;
                temp /= 10;
            }
            ans = Math.min(sum,ans);
        }
        return ans;
    }
}