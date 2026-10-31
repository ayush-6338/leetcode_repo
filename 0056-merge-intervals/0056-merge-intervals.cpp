class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](vector<int> a,vector<int> b){
            if(a[0]<b[0]) return true;
            return false;
        });
        vector<vector<int>> ans;
        int i = 1;
        while(i<=intervals.size()){
            vector<int> newInt(2);
            newInt[0] = intervals[i-1][0];
            int end = intervals[i-1][1];
            while(i<intervals.size() && end >= intervals[i][0]){
                if(end <= intervals[i][1])
                end = intervals[i][1];
                i++;
            }
            newInt[1] = end;
            ans.push_back(newInt);
            i++;
        }
    
        return ans;
    }
};