class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> result;
        vector<int> dupnums(nums);
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1,i,j;
        while(l<r)
        {
            if(nums[l]+nums[r]==target)
            {
                break;
            }
            else if(nums[l]+nums[r] < target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        for(i = 0;i < dupnums.size();i++)
        {
            if(dupnums[i]==nums[l])
            {
                result.push_back(i);
                break;
            }
        }
        for(i = dupnums.size()-1;i>=0;i--)
        {
            if(dupnums[i]==nums[r])
            {
                result.push_back(i);
                break;
            }
        }
        return result;
    }
};
