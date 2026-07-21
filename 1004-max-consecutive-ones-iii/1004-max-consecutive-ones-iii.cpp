class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int flips = 0;
        int i = 0;
        int j = 0;
        int maxx = INT_MIN;

        while(j<n){
            if(nums[j] == 1){
                j++;
            }
            else{
                if(flips < k){
                    j++;
                    flips++;
                }
                else{
                    int res = j - i;
                    maxx = max(maxx,res);
                    while(nums[i]!=0){
                        i++;
                    }
                    flips--;
                    i++;
                    
                }
            }
        }
        int res = j-i;
        maxx = max(maxx,res);
        return maxx;
    }
};