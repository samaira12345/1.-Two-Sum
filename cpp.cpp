class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(i!=j)
                {
                    if(nums[i]+nums[j]==target)
                    {
                        result.push_back(i);
                        result.push_back(j);
                        sort(result.begin(),result.end());
                    }
                }
            }
        }
        return result;
    }
};
