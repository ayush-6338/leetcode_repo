class Solution {
public:
    bool checkString(string s) {
        bool flag = false;
        for(char ch : s){
            if(!flag && ch == 'a') continue;
            else{
                if(ch=='b') flag=true;
                if(ch=='a' && flag) return false;
            }
        }
        return true;
    }
};