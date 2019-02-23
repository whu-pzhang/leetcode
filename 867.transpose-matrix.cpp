/*
 * @lc app=leetcode id=867 lang=cpp
 *
 * [867] Transpose Matrix
 *
 * https://leetcode.com/problems/transpose-matrix/description/
 *
 * algorithms
 * Easy (63.65%)
 * Total Accepted:    37.1K
 * Total Submissions: 58.2K
 * Testcase Example:  '[[1,2,3],[4,5,6],[7,8,9]]'
 *
 * Given a matrix A, return the transpose of A.
 *
 * The transpose of a matrix is the matrix flipped over it's main diagonal,
 * switching the row and column indices of the matrix.
 *
 *
 *
 *
 * Example 1:
 *
 *
 * Input: [[1,2,3],[4,5,6],[7,8,9]]
 * Output: [[1,4,7],[2,5,8],[3,6,9]]
 *
 *
 *
 * Example 2:
 *
 *
 * Input: [[1,2,3],[4,5,6]]
 * Output: [[1,4],[2,5],[3,6]]
 *
 *
 *
 *
 * Note:
 *
 *
 * 1 <= A.length <= 1000
 * 1 <= A[0].length <= 1000
 *
 *
 *
 *
 */
class Solution
{
  public:
    vector<vector<int>> transpose(vector<vector<int>> &A)
    {
        int rows = A.size(), cols = A[0].size();
        vector<vector<int>> res;
        vector<int> mid;

        for (int i = 0; i < cols; ++i) {
            for (int j = 0; j < rows; ++j) {
                mid.push_back(A[j][i]);
            }
            res.push_back(mid);
            mid.clear();
        }

        return res;
    }
};
