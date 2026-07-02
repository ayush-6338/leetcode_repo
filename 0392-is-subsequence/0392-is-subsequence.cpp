class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length()==0) return true;
        if(s.length()==1 && t.length()==1){
            return s[0] == t[0];
        }
        int j = 0;
        for(int i = 0;i<t.length();i++){
            if(t[i]==s[j]){
                j++;
            }
            
        }
        if(j!=s.length()) return false;
        return true;
    }
};