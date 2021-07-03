class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> v;
        int i,j;
        int n=grid.size();
        int m=grid[i].size();
        k=k%(m*n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                v.push_back(grid[i][j]);
            }
        }
        int l=v.size();
        while(k--)
        {
            int temp=v[l-1];
            for(i=v.size()-1;i>0;i--)
            {
                v[i]=v[i-1];
            }
            v[0]=temp;
        }
        int c=0;
         for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                grid[i][j]=v[c];
                c++;
            }
        }

        return grid;
    }
};
