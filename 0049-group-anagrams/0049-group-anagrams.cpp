class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto i : strs){
            string n = i;
            sort(n.begin(),n.end());
            mp[n].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto i : mp){
            ans.push_back(i.second);
        }
        return ans;
    }

};