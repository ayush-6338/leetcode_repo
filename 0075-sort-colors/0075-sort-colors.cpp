class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i =0;
        int j =0;
        int k =nums.size()-1;
        if(nums.size()==1) return;
        // int twoCount = 0;
        // for(int i : nums){
        //     if(i==2) twoCount++;
        // }

        while(j<=k){
            if(nums[j]==0){
                swap(nums[i],nums[j]);
                j++;
                i++;
            }
            else if(nums[j] == 2){
                while(nums[k]==2 && j!=k){
                    k--;
                    if(k<0) return;
                }
                swap(nums[j],nums[k]);
                j++;
                k--;
            }
            else j++;
        }
        i = 0;
        j = 0;
        while(j<nums.size() && nums[j]<2){
            if(nums[j]==0){
                swap(nums[i],nums[j]);
                j++;
                i++;
            } 
            else j++;
        }
        return;
    }
};