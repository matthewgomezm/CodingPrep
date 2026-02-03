class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int numsIndex = 0; // index of the number we are checking
        for(int i = 0; i < nums.size(); i++) // i is the index that iterates thru array
        {
            if(nums[i] != val) // checking if the value at the index is not equal to val
            {
                nums[numsIndex] = nums[i]; // replace
                numsIndex++;
            }
        }
        return numsIndex; // return index, which is 'k' in this case
        
    }
};
