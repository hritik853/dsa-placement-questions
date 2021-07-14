class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i,sum=0;
        int n=nums.size();
        int res=(n*(n+1))/2;
        for( i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        return res-sum;
    }
};
