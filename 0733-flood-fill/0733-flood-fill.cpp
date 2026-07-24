class Solution {
public:
    void dfs(vector<vector<int>>&image,int r,int c ,int og ,int color){
        int n = image.size();
        int m = image[0].size();

        if(r<0 || r>=n || c<0 || c>=m) return;
        if(image[r][c] != og) return;
        image[r][c] = color;

        dfs(image,r-1,c,og,color);
        dfs(image,r+1,c,og,color);
        dfs(image,r,c+1,og,color);
        dfs(image,r,c-1,og,color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int og = image[sr][sc];

        if(og == color) return image;

        dfs(image,sr,sc,og,color);
        return image;

    }
};