class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> per(nums.size());
        vector<int> sur(nums.size());
        per[0] =1,sur[nums.size()-1]=1;
        int i = 0,j= nums.size()-1;
        while(i<nums.size()-1){
            per[i+1] = per[i] * nums[i];
            sur[j-1] = sur[j] * nums[j]; 
            i++;
            j--;
        }
        for(int i = 0;i<nums.size();i++){
            nums[i] = per[i]*sur[i];
        }
        return nums;
    }

};