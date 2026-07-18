class Solution {
public:
    int hcf(int sm, int mx){
        if(mx%sm == 0) return sm;
        int rem = mx % sm;
        return hcf(rem,sm);
    }
    int findGCD(vector<int>& nums) {
        auto sm = min_element(nums.begin(),nums.end());
        auto mx = max_element(nums.begin(),nums.end());
        return hcf(*sm,*mx);

    }
};