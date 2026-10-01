class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char i : s){
            if(i == '(' || i == '[' || i == '{'){
                st.push(i);
            }
            else if(!st.empty()){ 
                if(i == ')'){
                    if(st.top()=='(') st.pop();
                    else return false;
                }
                else if(i == '}'){
                    if(st.top()=='{') st.pop();
                    else return false;
                }
                else{
                    if(st.top() == '[') st.pop();
                    else return false;
                }
            }
            else return false;
        }
        if(st.empty()) return true;
        return false;
    }
};