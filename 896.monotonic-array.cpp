/*
 * @lc app=leetcode id=896 lang=cpp
 *
 * [896] Monotonic Array
 *
 * https://leetcode.com/problems/monotonic-array/description/
 *
 * algorithms
 * Easy (54.50%)
 * Total Accepted:    32.1K
 * Total Submissions: 58.9K
 * Testcase Example:  '[1,2,2,3]'
 *
 * An array is monotonic if it is either monotone increasing or monotone
 * decreasing.
 * 
 * An array A is monotone increasing if for all i <= j, A[i] <= A[j].  An array
 * A is monotone decreasing if for all i <= j, A[i] >= A[j].
 * 
 * Return true if and only if the given array A is monotonic.
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: [1,2,2,3]
 * Output: true
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [6,5,4,4]
 * Output: true
 * 
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: [1,3,2]
 * Output: false
 * 
 * 
 * 
 * Example 4:
 * 
 * 
 * Input: [1,2,4,5]
 * Output: true
 * 
 * 
 * 
 * Example 5:
 * 
 * 
 * Input: [1,1,1]
 * Output: true
 * 
 * 
 * 
 * 
 * Note:
 * 
 * 
 * 1 <= A.length <= 50000
 * -100000 <= A[i] <= 100000
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */
class Solution
{
  public:
    bool isMonotonic(vector<int> &A)
    {
        bool inc = true, dec = true;
        int n = A.size();
        for (int i = 0; i < n - 1; ++i)
        {
            inc &= A[i] <= A[i + 1];
            dec &= A[i] >= A[i + 1];
        }

        return inc || dec;
    }
};
