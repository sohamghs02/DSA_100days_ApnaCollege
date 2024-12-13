class Solution {
public:
    void getPerms(vector<int>& nums, vector<vector<int>>& ans, int index){
        if(index == nums.size()){ //base case
            ans.push_back(nums);
            return;
        }
        for(int i=index; i<nums.size(); i++){
            swap(nums[index],nums[i]);//idx place == ith element choice
            getPerms(nums, ans, index+1);            
            swap(nums[index],nums[i]);//backtracking
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        getPerms(nums, ans, 0);
        return ans;        
    }
};