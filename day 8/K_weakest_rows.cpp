class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> v;
        vector<pair<int,int>> temp;
        for(int i=0;i<mat.size();i++){
            int cnt=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1)
                    cnt++;
                else
                    break;
            }
            temp.push_back({cnt,i});
        }

        sort(temp.begin(),temp.end());

        for(int i=0;i<k;i++)
            v.push_back(temp[i].second);
        return v;
    }
};
