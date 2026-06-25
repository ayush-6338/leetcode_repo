class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int i = 0;
        int j = i+1;
        if(prices.size()==1) return 0;
        while(j<prices.size()){
            if(prices[i]>prices[j]){
                i=j;
            } 
            else{
                int dif = prices[j]-prices[i];
                profit = max(profit,dif);
            }
            j++;
        }
        return profit;
    }
};