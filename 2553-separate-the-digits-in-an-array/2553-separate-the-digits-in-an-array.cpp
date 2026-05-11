class Solution {
private:
    void updateArr(vector<int>&ans,int num){
        stack<int> st;
        while(num>0){
            int a = num%10;
            st.push(a);
            num /= 10;
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return;
    }
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i : nums){
            updateArr(ans,i);
        }
        return ans;
    }
};