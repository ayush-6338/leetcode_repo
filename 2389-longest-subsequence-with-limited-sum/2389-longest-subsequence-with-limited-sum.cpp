class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        int m = queries.size();
        vector<int> ans(m);
        sort(nums.begin(),nums.end());
        for(int i = 1;i<n;i++){
            nums[i] = nums[i]+nums[i-1];
        }
        // 1 3 7 12  queries = 3 10 21
        for(int i = 0;i<m;i++){
            int lo = 0;
            int hi = n-1;
            int mid;
            bool flag= false;
            while(lo<=hi){
                mid = lo + (hi - lo)/2;
                if(nums[mid]==queries[i]){
                    flag = true;
                    break;
                }
                else if(nums[mid]<queries[i]){
                    lo = mid + 1;
                }
                else{
                    hi = mid - 1;
                }
            }
            if(!flag) ans[i] = hi+1;
            else
            ans[i] = mid+1;
        }
        
        return ans;
    }
};