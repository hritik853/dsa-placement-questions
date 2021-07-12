class Solution {
public:
    string thousandSeparator(int n) {
        if(n<1000)
            return to_string(n);
        string s,res;
        s=to_string(n);
        int l=s.size(),c=0;
        for(int i=l-1;i>=0;i--)
        {
            res+=s[i];
            c++;
            if(c==3)
            {
                res+='.';
                c=0;
            }

        }
        reverse(res.begin(),res.end());
        if(res[0]=='.')
            res=res.substr(1);

     return res;
    }
};
