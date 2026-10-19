class Solution {
public:
    int hbound(vector<int>&nums, int target){
        int lo = 0;
        int hi = nums.size()-1;
        int mid;
        int ans = -1;
        while(lo <= hi){
            mid = lo + (hi - lo) / 2;
            if(nums[mid] >= target){
                if(nums[mid] == target){
                    ans = mid;
                    lo = mid + 1;
                }
                else hi = mid -1;
            }
            else lo = mid +1 ;
        }
        return ans;
    }
    int lbound(vector<int>& nums,int target){
        int lo = 0;
        int hi = nums.size()-1;
        int mid;
        int ans = -1;
        while(lo <= hi){
            mid = lo + (hi -lo)/2;
            if(nums[mid] <= target){
                if(nums[mid]==target){
                    ans = mid;
                    hi = mid-1;
                }
                else lo = mid+1;
            }
            else hi = mid-1;
        }
        return ans;
        
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int lb = lbound(nums,target);
        int hb = hbound(nums,target);
        vector<int> ans;
        if(lb == -1 || hb == -1) return {};
        for(int i = lb ; i<=hb;i++){
            ans.push_back(i);
        }
        return ans;
    }
};