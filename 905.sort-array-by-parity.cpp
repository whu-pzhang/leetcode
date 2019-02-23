/*
 * @lc app=leetcode id=905 lang=cpp
 *
 * [905] Sort Array By Parity
 *
 * https://leetcode.com/problems/sort-array-by-parity/description/
 *
 * algorithms
 * Easy (72.09%)
 * Total Accepted:    65.7K
 * Total Submissions: 91.1K
 * Testcase Example:  '[3,1,2,4]'
 *
 * Given an array A of non-negative integers, return an array consisting of all
 * the even elements of A, followed by all the odd elements of A.
 *
 * You may return any answer array that satisfies this condition.
 *
 *
 *
 *
 * Example 1:
 *
 *
 * Input: [3,1,2,4]
 * Output: [2,4,3,1]
 * The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
 *
 *
 *
 *
 * Note:
 *
 *
 * 1 <= A.length <= 5000
 * 0 <= A[i] <= 5000
 *
 *
 *
 */
class Solution
{
  public:
    vector<int> sortArrayByParity(vector<int> &A)
    {
        int left = 0, right = A.size() - 1;
        int temp;

        while (left < right) {
            // 向后移动it1，直到指向奇数
            while (left < right && ((A[left] & 0x1) == 0))
                ++left;

            // 向前移动it2，直到指向偶数
            while (left < right && ((A[right] & 0x1) != 0))
                --right;

            if (left < right) {
                temp = A[left];
                A[left] = A[right];
                A[right] = temp;
            }
        }

        return A;
    }
};
