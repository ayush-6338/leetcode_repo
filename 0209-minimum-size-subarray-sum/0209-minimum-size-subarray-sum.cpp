class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0;
        int j = i;
        int sum = 0;
        int size = INT_MAX;
        for(;j<nums.size();j++){
            sum += nums[j];

            while(sum>=target){
                size = min(size,j-i+1);

                sum -= nums[i];
                i++;
            }
        }
        return (size==INT_MAX)?0:size;
    }
};