class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<int>ans;
        int sum=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;++i)
        {
            sum=nums[i]+nums[n-i-1];
            ans.insert(sum);
        }
        return ans.size();
        
    }
};
