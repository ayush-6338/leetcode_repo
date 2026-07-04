class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        // 1 0 1 2 1 1 7 5
        // 0 1 0 1 0 1 0 1
        // k = 3
        int k = minutes;
        
        int idx = -1;
        int maxLost = INT_MIN;
        int unsatisfied = 0;
        for(int i = 0;i<k;i++){
            if(grumpy[i] == 1){
                unsatisfied += customers[i];
            }
        }
        maxLost = max(maxLost,unsatisfied);
        idx = 0;
        for(int i = k;i<grumpy.size();i++){
            if(grumpy[i-k] == 1){
                unsatisfied -= customers[i-k];
            }
            if(grumpy[i] == 1){
                unsatisfied += customers[i];
            }
            if(maxLost < unsatisfied){
                maxLost = unsatisfied;
                idx = (i-k)+1;
            }
        }
        for(int i = idx ;i<idx+k;i++){
            grumpy[i] = 0;
        }
        int ans = 0;
        for(int i = 0;i<customers.size();i++){
            if(grumpy[i] == 0){
                ans += customers[i];
            }
        }
        return ans;
        
    }
};