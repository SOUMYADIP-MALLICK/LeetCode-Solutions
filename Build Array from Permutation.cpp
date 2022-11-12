class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int a = nums.size();
        vector<int> ans(a,0);
        for(int i=0;i<a;i++)
        {
            ans[i]=nums[nums[i]];
        }
        return ans;
    }
    
};