/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 *
 * https://leetcode.com/problems/majority-element/description/
 *
 * algorithms
 * Easy (51.38%)
 * Total Accepted:    347.1K
 * Total Submissions: 675.1K
 * Testcase Example:  '[3,2,3]'
 *
 * Given an array of size n, find the majority element. The majority element is
 * the element that appears more than ⌊ n/2 ⌋ times.
 *
 * You may assume that the array is non-empty and the majority element always
 * exist in the array.
 *
 * Example 1:
 *
 *
 * Input: [3,2,3]
 * Output: 3
 *
 * Example 2:
 *
 *
 * Input: [2,2,1,1,1,2,2]
 * Output: 2
 *
 *
 */
class Solution
{
  public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> um;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            um[nums[i]] += 1;
        }

        int max_count = 0, val = 0;
        for (auto it = um.cbegin(); it != um.cend(); ++it) {
            if (it->second > max_count) {
                max_count = it->second;
                val = it->first;
            }
        }

        return val;
    }

    int majorityElement2(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};
