class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int total =1;
        for(int i=0; i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1])
                nums[total++]=nums[i+1];
        }
        return total;
    }
};
