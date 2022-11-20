/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
 void In(TreeNode* root, vector<int>& nums) {
        if(root) {
            In(root->left,nums);
            nums.push_back(root->val);
            In(root->right,nums);
        }
    }

    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<int> nums;
        In(root,nums);
        vector<vector<int>> ans;
        int n = queries.size();
        
        for(int k=0; k<n; k++){
            int mini = -1, maxi = -1;
            int ind = lower_bound(nums.begin(),nums.end(), queries[k]) - nums.begin();
            if(ind != nums.size())
            {
                maxi = nums[ind];
                if(maxi == queries[k]) {
                    mini = maxi;
                } else {
                    if(ind==0){
                        mini = -1;
                    } else {
                        mini = nums[ind-1];
                    }
                }
            }
            else {
                mini = nums.back();
            }
            ans.push_back({mini, maxi});
        }
        
        return ans;
    }
