class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.length() == 1) return s;
        map<char,int> mp;
        for(char i : s){
            mp[i]++;
        }
        string fst = "";
        string sec = "";

        for(auto& i : mp){
            int mul = i.second / 2;
            while(mul != 0){
                fst += i.first;
                sec += i.first;
                mul--;
            }   

            mp[i.first] = i.second % 2; 
        }

        string add = "";
        for(auto i : mp){
            if(i.second != 0){
                add += i.first;
            }
        }
        reverse(sec.begin(),sec.end());
        return fst + add + sec;
    }
};