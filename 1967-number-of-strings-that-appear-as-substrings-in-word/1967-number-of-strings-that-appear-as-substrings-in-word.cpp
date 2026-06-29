class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        for(string i : patterns){
            if(word.contains(i)){
                count++;
            }
        }
        return count;
    }
};