class Solution {
public:
    int dateParser(string st){
        int ans = 0;
        for(char i : st){
            if(i == '-') continue;
            ans = ans * 10 + (i-'0');

        }
        return ans;
    }
    int daycal(int st, int end,int mon[],int n){
        int ans = 0;
        string st1 = to_string(st);
        string end1 = to_string(end);
        string st2 , end2; 
        if(st > 1000) st2 = st1.substr(2),st1 = st1.substr(0,2) ;
        else st2 = st1.substr(1),st1 = st1.substr(0,1);
        if(end > 1000)end2= end1.substr(2), end1 = end1.substr(0,2);
        else end2= end1.substr(1) , end1 = end1.substr(0,1);

        int st3 = stoi(st1) , end3 = stoi(end1);
        int st4 = stoi(st2) , end4 = stoi(end2);
        if(st3 == end3){
            ans = end4-st4 + 1;
        }
        else{
            cout<<st4<<" "<<end4<<endl;
            for(int i = st3;i<end3;i++){
                if(i == st3) {
                    ans += (mon[i-1] - st4) + 1;
                    continue;
                }
                ans += mon[i-1];
            }
            ans += end4;
        }
        return ans;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int mon[] = {31,28,31,30,31,30,31,31,30,31,30,31};
        int aliceSt = dateParser(arriveAlice);
        int alicelt = dateParser(leaveAlice);
        int bobSt = dateParser(arriveBob);
        int boblt = dateParser(leaveBob);
        
        if(bobSt > alicelt || (aliceSt > boblt)) return 0;

        int st = max(aliceSt,bobSt);
        int end = min(alicelt , boblt);
        

        return daycal(st,end,mon,12);
        
    }
};