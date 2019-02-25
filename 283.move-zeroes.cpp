/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 *
 * https://leetcode.com/problems/move-zeroes/description/
 *
 * algorithms
 * Easy (53.54%)
 * Total Accepted:    419.7K
 * Total Submissions: 783.8K
 * Testcase Example:  '[0,1,0,3,12]'
 *
 * Given an array nums, write a function to move all 0's to the end of it while
 * maintaining the relative order of the non-zero elements.
 * 
 * Example:
 * 
 * 
 * Input: [0,1,0,3,12]
 * Output: [1,3,12,0,0]
 * 
 * Note:
 * 
 * 
 * You must do this in-place without making a copy of the array.
 * Minimize the total number of operations.
 * 
 */
class Solution
{
  public:
    void moveZeroes(vector<int> &nums)
    {
        int lastNonZeroIndex = 0;
        int n = nums.size();
        int i, j;
        for (i = 0; i < n; ++i)
            if (nums[i] != 0)
                nums[lastNonZeroIndex++] = nums[i];

        for (j = lastNonZeroIndex; j < n; ++j)
            nums[j] = 0;
    }
};
