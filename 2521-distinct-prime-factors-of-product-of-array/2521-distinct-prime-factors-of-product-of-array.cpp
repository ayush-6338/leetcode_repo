class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        int maxEle = *max_element(nums.begin(),nums.end());
        int count = 0;
        vector<int> prime(maxEle+1,1);
        for(int i = 2;i<=sqrt(maxEle);i++){
            if(prime[i]==0) continue;
            int j = i*2;
            while(j<=maxEle){
                prime[j] = 0;
                j+=i;
            }
        }
        for(int j : nums){
            for(int i = 2;i<prime.size();i++){
                //index is actual no and value = show karta hai prime hai ya nhi 1 se
                if(j<i) break;
                if(prime[i]==1 && j%i==0){
                    prime[i] = 0;
                    count++;
                    cout<<i<<" ";
                }
            }
        }
        return count;
    }
};
