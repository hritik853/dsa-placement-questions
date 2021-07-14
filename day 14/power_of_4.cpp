class Solution {
public:
    bool isPowerOfFour(int n) {
        int flag=0;
        while(n>1)
        {
            if(n%4 !=0)
                flag=1;
            n/=4;
        }
        if(flag==1)
            return false;
        return n==1;
    }
};
