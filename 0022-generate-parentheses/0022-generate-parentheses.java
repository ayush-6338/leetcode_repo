class Solution {
    public void generator(ArrayList<String> ans, String st, int op,int cl , int n){
        if(op == n && cl ==n){
            ans.add(st);
            return;
        }
        if(op <= n) generator(ans,st+"(" , op+1,cl,n);
        if(cl <=n && cl < op) generator(ans,st+")" , op ,cl+1,n);
        return;
    }
    public List<String> generateParenthesis(int n) {
        ArrayList<String> ans = new ArrayList<>();
        String st = new String();
        generator(ans,st,0,0,n);
        return ans;
    }
}