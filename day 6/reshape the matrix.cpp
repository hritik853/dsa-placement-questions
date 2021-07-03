class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> v;
        vector<vector<int>> ve(r,vector<int>(c));
        int i,j,k=0;
        for(i=0;i<mat.size();i++)
        {
            for(j=0;j<mat[i].size();j++)
            {
                v.push_back(mat[i][j]);
            }
        }
        int l=v.size();
        if(r*c == l)
        {


        for(int i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                ve[i][j]=v[k];
                k++;
            }
        }
        return ve;
        }
            return mat;

    }
};
