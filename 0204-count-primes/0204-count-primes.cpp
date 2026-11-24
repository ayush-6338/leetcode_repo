class Solution {
public:
    int countPrimes(int n) {
        vector<int> primeChecker(n+1,1);
        for(int i = 2;i<=sqrt(n);i++){
            if(primeChecker[i] == 1){
                int a = i+i;
                while(a<=n){
                    primeChecker[a] = 0;
                    a+=i;
                }
            }
        }
        int count = 0;
        for(int i= 2;i<n;i++){
            if(primeChecker[i]==1) count++;
        }
        return count;
    }
};