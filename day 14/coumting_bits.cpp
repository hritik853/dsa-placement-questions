class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c =0;
        while(n!=0)
        {
            c++;
            n=n&(n-1);
        }
        return c;
    }
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++)
        {
            int a = hammingWeight(i);
            v.push_back(a);
        }
        return v;

    }
};
