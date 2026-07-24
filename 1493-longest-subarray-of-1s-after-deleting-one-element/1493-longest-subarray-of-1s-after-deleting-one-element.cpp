class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int n = nums.size();
        
        int del = 0;
        bool flag = false;

        int maxx = 0;
        while(j<n){
            if(nums[j] == 1){
                j++;
            }
            else{
                if(del == 1){
                    flag = true;
                    int val = (j-(i+1));
                    maxx =  max(val,maxx);
                    while(nums[i] != 0){
                        i++;
                    }
                    i++;
                    j++;
                    del = 1;
                }
                else{
                    del += 1;
                    j++;
                } 
            }
        }
        if(!flag) return n-1;
        int val = j-(i+1);
        maxx = max(val,maxx);


        return maxx;
    }
};