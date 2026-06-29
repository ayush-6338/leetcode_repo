class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size()-1;
        int i = 0;
        int j = n;
        int area = -1;
        while(i<j){
            int hi = min(height[i],height[j]);
            int wi = j - i;
            area = max(area, hi*wi);
            if(height[i]<height[j]) i++;
            else j--;
        }
        return area;
    }
};