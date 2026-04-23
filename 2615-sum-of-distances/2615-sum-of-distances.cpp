class Solution { // Please upvote if it helps
public:
    void func(vector<long long> &ans, vector<int> &pos){
        int n = pos.size();
        long long total = 0, prefix = 0;
        for(auto &i : pos) total += i;
        //calculating the value for each pos
        for(int i = 0; i < n; i++){
            long long left = (1ll * pos[i]  *i) - prefix; //distance to all previous indices
            prefix += pos[i];  //include current index in prefix
            long long right = (total-prefix) - (1ll * pos[i] * (n-1-i)); //distance to all future indices
            ans[pos[i]] = left + right;
        }
    }
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        vector<long long> ans(n);
        unordered_map<int, vector<int>> mp;
        for(int i = 0; i < n; i ++){  //group indices by value
            mp[nums[i]].push_back(i);
        }
        for(auto &[val, pos] : mp){ //process each group independently
            if(pos.size() > 1){
                func(ans, pos);
            }
        }
        return ans;
    }
};
