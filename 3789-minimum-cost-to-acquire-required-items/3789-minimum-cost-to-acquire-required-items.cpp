class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long  mxNeed = max(need1,need2);
        long long byCostBoth = costBoth * mxNeed;

        long long val = (long long)cost1*(long long)need1 + (long long)need2*(long long)cost2;
        

        long long mnNeed = min(need1,need2);
        long long val2 = costBoth*mnNeed + (mxNeed - mnNeed) * ((mxNeed == need1) ? cost1 : cost2 );

        byCostBoth = min(byCostBoth,val2);  

        return min(val,byCostBoth);
    }
};