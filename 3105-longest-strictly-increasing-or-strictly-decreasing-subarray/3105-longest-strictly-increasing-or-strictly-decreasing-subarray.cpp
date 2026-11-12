class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int mxlen = 1;
        int iCount = 0;
        int dCount = 0;
        int pnt = 0;
        for(int i = 1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                if(dCount > 0){
                    pnt = i-1;
                    mxlen = max(mxlen, dCount);
                    dCount = 0;
                }
                iCount = (i - pnt)+1;
            }
            else if(nums[i-1]>nums[i]){
                if(iCount > 0){
                    pnt = i-1;
                    mxlen = max(mxlen,iCount);
                    iCount = 0;
                }
                dCount= (i-pnt)+1;
            }
            else{
                pnt = i;
                if(dCount > 0){
                    mxlen = max(mxlen, dCount);
                    dCount = 0;
                }
                else if(iCount>0){
                    mxlen = max(mxlen,iCount);
                    iCount = 0;
                }
            }

        }
        if(dCount > 0){
            mxlen = max(mxlen, dCount);
        }
        else if(iCount>0){
            mxlen = max(mxlen,iCount);
        }
        return mxlen;
    }
};