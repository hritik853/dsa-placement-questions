class Solution {
public:
    void dfs(vector<vector<int>>& image, int x, int y, int newColor, int oldColor){
        if(x<0 || y<0 || x>=image.size() || y>=image[0].size() || image[x][y]!=oldColor || image[x][y]==newColor)
            return;
        image[x][y]=newColor;
        dfs(image,x+1,y,newColor,oldColor);
        dfs(image,x-1,y,newColor,oldColor);
        dfs(image,x,y-1,newColor,oldColor);
        dfs(image,x,y+1,newColor,oldColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int old=image[sr][sc];
        dfs(image,sr,sc,newColor,old);
        return image;
    }
};
