class Solution {
private:
    void helper(vector<vector<int>> &ans,vector<int> &nums,vector<int> &ds,int target,int i){
        if(i>=nums.size()){
            if(target == 0) ans.push_back(ds);
            return ;
        }
        if(target<0) return;

        helper(ans,nums,ds,target,i+1);
        ds.push_back(nums[i]);
        helper(ans,nums,ds,target-nums[i],i);
        ds.pop_back();
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> ans;
        helper(ans,candidates,ds,target,0);
        return ans;
    }
};