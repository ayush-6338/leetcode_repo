class Solution {
public:
    int maxVowels(string s, int k) {
        set<char>vowel = {'a','e','i','o','u'};
        int total = 0;
        for(int i = 0;i<k;i++){
            if(vowel.count(s[i])==1){
                total += 1;
            }
        }
        int maxCount = total;
        for(int i = k;i<s.length();i++){
            if(vowel.count(s[i-k])==1){
                total -= 1;
            }
            if(vowel.count(s[i])==1){
                total += 1;
            }
            maxCount = max(total,maxCount);
        }
        return maxCount;
    }
};