class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int flag=0,i,j;
        int n=nums.size();
        for( i=0;i<n;i++)
        {flag=0;
            for( j=0;j<n;j++)
            {
                if(nums[j]==i)
                    flag=1;
            }
            if(flag==0)
                return i;
        }
        return i;
    }
};
