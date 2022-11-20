class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int sum = 0;
        if(nums.size()<3)
        {
            return 0;
        }
        else
        {
            for (int i=0; i<nums.size();i++)
            {
                for(int j=i+1; j<nums.size();j++)
                {
                    for(int k=j+1; k<nums.size();k++)
                    {
                        if(nums[i] != nums[j]&& nums[i] != nums[k]&&  nums[j] != nums[k])
                            sum=sum+1;
                    }
                }
            }
            return sum;
        }
        
        
    }
};
