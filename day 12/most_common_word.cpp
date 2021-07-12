class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        for(int i=0;i<paragraph.size();i++)
        {
            paragraph[i]=isalpha(paragraph[i])?tolower(paragraph[i]):' ';
        }
        unordered_map<string,int> res;
        stringstream s(paragraph);
        unordered_set<string> set(banned.begin(),banned.end());
        string word;
        while(s >> word)
        {
            if(!set.count(word))
                res[word]++;
        }
        int fre=INT_MIN;
        string temp;
        for(auto i : res)
        {
            if(i.second > fre)
            {
                temp=i.first;
                fre=i.second;
            }
        }
        return temp;

    }
};
