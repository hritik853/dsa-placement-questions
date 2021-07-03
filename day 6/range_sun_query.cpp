class NumArray {
public:
    vector<int> v;
    NumArray(vector<int>& nums) {
        v.push_back(0);
        for(int i=0;i<nums.size();i++)
        {
            v.push_back(nums[i]+v[i]);
        }

    }

    int sumRange(int left, int right) {
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        return v[right+1]-v[left];

    }
};
