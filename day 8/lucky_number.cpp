class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> v;
        int mi,ma,pos;
        int r,c;
        r=matrix.size();
        c=matrix[0].size();
        for(int i=0;i<r;i++)
        {
            mi=INT_MIN;
            ma=INT_MAX;
            pos=0;
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]<ma)
                {
                    ma=matrix[i][j];
                    pos=j;
                }

            }

            cout<<ma<<endl;
            for(int j=0;j<r;j++)
            {
                if(matrix[j][pos]>mi)
                {
                    mi=matrix[j][pos];
                }
            }

            if(ma==mi)
            {
                v.push_back(ma);
                return v;
            }

        }

        return v;
    }
};
