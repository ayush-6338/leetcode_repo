class Solution {
public:
    bool isValid(string s) {
        if(s.length()==1 ) return false;
        stack<char> st;
        map<char , char> mp = {{')','('},{'}','{'},{']','['}};
        for(char i : s){
            if(i=='(' || i=='[' || i=='{'){
                st.push(i);
            }
            else{
                if(!st.empty() && st.top()==mp[i]){
                    st.pop();
                }
                else return false;
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};