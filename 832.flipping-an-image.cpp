/*
 * @lc app=leetcode id=832 lang=cpp
 *
 * [832] Flipping an Image
 *
 * https://leetcode.com/problems/flipping-an-image/description/
 *
 * algorithms
 * Easy (71.33%)
 * Total Accepted:    74.1K
 * Total Submissions: 103.9K
 * Testcase Example:  '[[1,1,0],[1,0,1],[0,0,0]]'
 *
 * Given a binary matrix A, we want to flip the image horizontally, then invert
 * it, and return the resulting image.
 *
 * To flip an image horizontally means that each row of the image is reversed.
 * For example, flipping [1, 1, 0] horizontally results in [0, 1, 1].
 *
 * To invert an image means that each 0 is replaced by 1, and each 1 is
 * replaced by 0. For example, inverting [0, 1, 1] results in [1, 0, 0].
 *
 * Example 1:
 *
 *
 * Input: [[1,1,0],[1,0,1],[0,0,0]]
 * Output: [[1,0,0],[0,1,0],[1,1,1]]
 * Explanation: First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].
 * Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]
 *
 *
 * Example 2:
 *
 *
 * Input: [[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]
 * Output: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
 * Explanation: First reverse each row:
 * [[0,0,1,1],[1,0,0,1],[1,1,1,0],[0,1,0,1]].
 * Then invert the image: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
 *
 *
 * Notes:
 *
 *
 * 1 <= A.length = A[0].length <= 20
 * 0 <= A[i][j] <= 1
 *
 *
 */
class Solution
{
  public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A)
    {
        int rows = A.size(), cols = A[0].size();
        int i, j;
        vector<vector<int>> res;
        vector<int> mid;

        for (i = 0; i < rows; ++i) {
            for (j = 0; j < cols; ++j) {
                mid.push_back(A[i][cols - j - 1] ^ 0x1);
            }
            res.push_back(mid);
            mid.clear();
        }

        return res;
    }
};
