class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        vector<int> suf(satisfaction);
        for(int i = satisfaction.size()-2;i>=0;i--){
            suf[i] = suf[i]+suf[i+1];
        }
        int ans = 0;
        int time = 1;
        for(int i = 0;i<satisfaction.size();i++){
            if(suf[i]>=0){
                ans += satisfaction[i] * time++;
            }
        }
        return ans;
    }
};