class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str;
        if(strs.empty()) return "";
        if(strs.size()==1) return strs[0];

        for(int i=0;i<min(strs[0].size(),strs[1].size());i++)
        {
            if(strs[0][i]==strs[1][i])
            {
                str=str+strs[0][i];
            }
            else break ;
        }

        for(int i=2;i<strs.size();i++)
        {
           int c=0;
            while(c<str.length() && (str[c]==strs[i][c]))
            {
                c++;
            }
            str=str.substr(0,c);
        }
       return str;
        }

};
