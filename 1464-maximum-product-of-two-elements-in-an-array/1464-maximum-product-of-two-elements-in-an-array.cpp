class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mxPro = INT_MIN;
        int pro;
        int i = 1;
        while(i < nums.size()){
            pro = (nums[i]-1)*(nums[i-1]-1);
            cout<<pro<<endl;
            mxPro = max(mxPro,pro);
            i++;
        }
        return mxPro;
    }
};