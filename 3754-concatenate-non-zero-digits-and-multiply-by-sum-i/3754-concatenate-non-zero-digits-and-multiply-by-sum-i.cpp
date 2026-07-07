class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n == 0) return 0;
        string st = to_string(n);
        string ans = "";
        long long sum = 0;    
        for(char i : st){
            if(i == '0')continue;
            else{
                ans += i;
                sum += i-'0';
            }
        }
        long long  x = stoi(ans);
        long long val = sum*x;
        return val;

    }
};