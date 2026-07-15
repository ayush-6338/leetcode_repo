class Solution {
public:
    int gcd(int n,int m){
        if(m%n == 0) return n;
        int prc = m%n;
        return gcd(prc,n);
    }
    int gcdOfOddEvenSums(int n) {
        int sumOdd = pow(n,2);
        int sumEven = n*(n+1);

        return gcd(sumOdd,sumEven);
    }
};