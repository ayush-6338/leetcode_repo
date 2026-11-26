class Solution {
public:
    bool canAliceWin(int n) {
        int ans = 0;
        for(int i = 10;i>0;i--){
            ans += i;
            if(i%2==0 && ans>n){
                return false;
            }
            else if(i%2!=0 && ans>n){
                return true;
            }
        }
        return false;
    }
};