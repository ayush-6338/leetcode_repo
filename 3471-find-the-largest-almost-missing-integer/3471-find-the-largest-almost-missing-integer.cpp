class Solution {
public:
    int findans(vector<int>& nums){
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        int returnno = -1;
        for(auto i : mp){
            if(i.second == 1){
                returnno = max(returnno,i.first);
            }
        }
        return returnno;
    }
    int largestelem(vector<int>& nums){
        return *max_element(nums.begin(),nums.end());
    }
    int largestInteger(vector<int>& nums, int k) {
        int fir = nums[0];
        int n = nums.size();
        int last = nums[n-1];
        if(k == 1){
            return findans(nums);
        }
        if(k == n){
            return largestelem(nums);
        }
        if(fir == last) return -1;
        for(int i = 1;i<=n-2;i++){
            if(nums[i] == fir){
                fir = -1;
            }
            if(nums[i] == last){
                last = -1;
            }
        }
        int ans = max(fir,last);
        return ans;
    }
};