class Solution {
public:
    double angleClock(int hour, int minutes) {
        if(hour==12)hour = 0; 
        double ans = abs((30*hour)-(5.5*minutes));
        if(ans<180) return ans;
        else return (360.0-ans);
    }
};