class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int i = 1;
        sort(nums.begin(),nums.end());
        for(int j : nums){
            if(k*i == j){
                i++;
            }

        }
        return k*i;
    }
};