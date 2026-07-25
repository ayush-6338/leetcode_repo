class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;
        int i = 0;
        int j = 0;
        int n = nums.size();

        int count = 0;
        int pro = 1;

        while(j<n){
            pro *= nums[j];
            while(pro >= k){
                count += (j-i);
                pro /= nums[i];
                i++;

            }
            j++;
        }
        while(i<n){
            count += (j-i);
            pro /= nums[i];
            i++;
        }
        return count;
    }
};