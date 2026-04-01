class Solution {
public:
    void genpar(vector<string>& ans,string st ,int op,int cl, int n){
        if(op==n && cl==n){
            ans.push_back(st);
            return;
        }

        if(op<=n) genpar(ans,st+'(',op+1,cl,n);
        if(cl<=n && cl<op) genpar(ans,st+')',op,cl+1,n);
        return;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        genpar(ans,"",0,0,n);
        return ans;
    }
};