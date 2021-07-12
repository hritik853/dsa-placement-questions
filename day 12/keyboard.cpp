class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> res;
        vector<int> arr{2,3,3,2,1,2,2,2,1,2,2,2,3,3,1,
                        1,1,1,2,1,1,3,1,3,1,3};
        for(int i=0;i<words.size();i++)
        {
            int f=1;
            int temp=arr[tolower(words[i][0])-'a'];
            for(int j= 1;j<words[i].size();j++)
            {
                if(temp!=arr[tolower(words[i][j])-'a'])
                {
                    f=0;
                    break;
                }
            }
            if(f)
            {
                res.push_back(words[i]);
            }
        }
        return res;
    }
};
