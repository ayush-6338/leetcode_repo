class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>cap(26,0);
        for(char i : word){
            if((int)i >= 65 && (int)i<=90){
                cap[(int)i-65] = 1;
            }
        }
        int ans = 0;
        for(char i : word){
            if((int)i>=97 && (int)i<=122){
                ans += cap[(int)i-97]; 
                cap[(int)i-97] = 0;
                cout<<(int)i-97<<endl;
            }
        }
        return ans;
    }
};