class Solution {
public:

    void helper(set<vector<int>>& ans, vector<int>& nums, vector<int> temp, int n, int index){
        if(index == n){
            sort(temp.begin(), temp.end()); // Sort the temp vector before inserting it.
            ans.insert(temp);
            return;
        }

        temp.push_back(nums[index]);
        helper(ans, nums, temp, n, index+1);
        temp.pop_back();
        helper(ans, nums, temp, n, index+1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> s;
        vector<int> temp;

        helper(s, nums, temp, nums.size(), 0);
        vector<vector<int>> ans(s.begin(), s.end());
        return ans;
    }
};