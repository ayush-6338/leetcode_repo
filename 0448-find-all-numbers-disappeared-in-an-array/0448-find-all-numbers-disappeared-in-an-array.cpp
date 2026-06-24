class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i = 1;i<=n;i++){
            mp[i]=0;
        }
        for(int i : nums){
            mp[i]++;
        }
        for(auto& i : mp){
            if(i.second == 0) ans.push_back(i.first);
        }
        mp.clear();
        return ans;
    }
};