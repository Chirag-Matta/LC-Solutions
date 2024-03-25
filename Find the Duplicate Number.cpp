class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        int n = nums.size();

        
        slow = nums[slow];
        fast = nums[nums[fast]];

        
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }

        
        int ptr1 = 0;
        int ptr2 = slow;
        while (ptr1 != ptr2) {
            ptr1 = nums[ptr1];
            ptr2 = nums[ptr2];
        }

        return ptr1;
    }
};
