class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p1 = 1;
        int p2 = 1;
        int count = 0;
        for(int i : nums){
            if(i == 0) count++;
            if(i != 0){
                p2 *= i;
            }
            p1 *= i;
        }
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0 && count > 1){
                nums[i] = 0;
            }
            else if(nums[i]==0 && count==1){
                nums[i] = p2;
            }
            else{
                nums[i] = p1/nums[i];
            }

        }
        return nums;
    }
};