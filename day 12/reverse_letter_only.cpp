class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l=0;
        int r=s.size()-1;
        while(l<r)
        {
            if(!isalpha(s[l]))
                l++;
            if(!isalpha(s[r]))
                r--;
            if(isalpha(s[l]) && isalpha(s[r]))
            {
                swap(s[l],s[r]);
                l++;r--;
            }


        }
        return s;
    }
};
