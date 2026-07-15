class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> plow(n);
        vector<int> alow(n);
        stack<int> st;
        for(int i = 0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()){
                plow[i] = -1;
                st.push(i);
            }
            else{
                plow[i] = st.top();
                st.push(i);
            }
        }
        
        while(!st.empty()){
            st.pop();
        }
        // lowest after the given element


        for(int i = n-1 ;i>= 0 ;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()){
                alow[i] = n;
                st.push(i);
            }
            else{
                alow[i] = st.top();
                st.push(i);
            }
        }

        int maxArea = 0;

        for(int i = 0;i<n;i++){
            int width = alow[i] - plow[i] - 1;
            cout<<width<<endl;
            int area = heights[i] * width;
            maxArea = max(maxArea,area);
        }
        return maxArea;

    }
};