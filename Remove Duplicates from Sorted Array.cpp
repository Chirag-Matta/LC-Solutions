class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1;
        int j = 1;
        int n=nums.size();
        for(i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};