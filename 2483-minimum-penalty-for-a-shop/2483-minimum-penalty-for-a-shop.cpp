class Solution {
public:
    int bestClosingTime(string customers) {
        vector<int> yCount(customers.size()+1);
        vector<int> nCount(customers.size()+1);
        yCount[yCount.size()-1] =0;
        nCount[0] = 0;
        int j = yCount.size()-1;
        int i = 0;
        while(i<customers.size()){
            int point = 0;
            int neg = 0;
            if(customers[j-1] == 'Y') point = 1;
            if(customers[i] == 'N') neg = 1;              
            yCount[j-1] = point+yCount[j];  
            nCount[i+1] = neg+nCount[i];
            i++;
            j--;
        }
        int idx = 0;
        int ans = INT_MAX;
        for(int i = 0;i<yCount.size();i++){
            yCount[i] = yCount[i] + nCount[i];
            if(yCount[i]<ans){
                ans = yCount[i];
                idx = i;
            } 
        }
        return idx;
    }
};