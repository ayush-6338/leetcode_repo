class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i<n){
            if(nums[i]<=0 || nums[i]>n || nums[i]==i+1) i++;
            else{
                if(nums[i] == nums[nums[i]-1]) i++;
                else swap(nums[i],nums[nums[i]-1]);
            }
        }
        int j = 1;
        for(;j<=n;j++){
            if(nums[j-1]!=j) return j;
        }
        return j;
    }
};