class Solution {
public:
    int maxProduct(int n) {
        string st = to_string(n);
        sort(st.begin(),st.end());
        int l = st[st.length()-1]-'0';
        int sl = st[st.length()-2] - '0';

        return l*sl;
        
    }
};