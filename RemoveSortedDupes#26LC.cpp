class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) //returns empty array case
            return 0;

        int prevIndex = 0; 
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[prevIndex]) {
                
                prevIndex++; // keeps the unique # the same and moves
                nums[prevIndex] = nums[i]; // copy next index to prevIndex
            }
        }
        return prevIndex + 1; 
    }
};
