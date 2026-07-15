class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int n = asteroids.size();
        vector<int> ans;
        for(int i = 0;i<n;i++){
            bool flag = false;
            if(asteroids[i]>=0){
                st.push(asteroids[i]);
            }
            else{
                if(st.empty()){
                    ans.push_back(asteroids[i]);
                    continue;
                }
                if(abs(asteroids[i]) == st.top()){
                    st.pop();
                    continue;
                }
                else if(abs(asteroids[i])<st.top()){
                    continue;
                }
                else{
                    while(!st.empty() && st.top()<=abs(asteroids[i])){
                        if(st.top() == abs(asteroids[i])){
                            st.pop();
                            break;
                        }
                        else st.pop();
                        if(st.empty()){
                            flag = true;
                            continue;
                        }
                    }
                }
            }
            if(flag){
                ans.push_back(asteroids[i]);
            }
        }
        stack<int> rev;
        while(!st.empty()){
            rev.push(st.top());
            st.pop();
        }
        while(!rev.empty()){
            ans.push_back(rev.top());
            rev.pop();
        }
        return ans;
    }
};