class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int length=nums.size();
        vector<int> ans(length,0);
        int sum =0;
        for(int i=0; i<length; i++)
        {
            sum =sum + nums[i];
            ans[i]=sum;
        }
        return ans;
    }
};
