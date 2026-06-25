class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i < n){
            if(nums[i] != i+1){
                if(nums[i] == nums[nums[i]-1]) i++;
                else swap(nums[i],nums[nums[i]-1]);
            }
            else{
                i++;
            }
        }
        for(int i : nums){
            cout<<i<<' ';
        }
        vector<int> ans;
        for(int i = 1;i<=n;i++){
            if(i!=nums[i-1]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};