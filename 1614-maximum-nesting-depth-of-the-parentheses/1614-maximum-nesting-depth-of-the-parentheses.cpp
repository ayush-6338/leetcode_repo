class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int ans = 0;
        for(char i : s){
            if(i == '('){
                st.push(i);
            }
            else if(!st.empty() && i == ')'){
                if(ans<st.size()){
                    ans = st.size();
                }
                st.pop();

            }
            else{
                continue;
            }
        }
        return ans;
    }
};