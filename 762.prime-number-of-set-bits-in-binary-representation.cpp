/*
 * @lc app=leetcode id=762 lang=cpp
 *
 * [762] Prime Number of Set Bits in Binary Representation
 */
class Solution
{
  public:
    int countPrimeSetBits(int L, int R)
    {
        int count = 0;
        for (int n = L; n <= R; n += 1)
        {
            int cnt = this->numberOf1bits(n);
            count += (this->isPrime(cnt));
        }
        return count;
    }

    int numberOf1bits(int num)
    {
        int cnt = 0;
        while (num != 0)
        {
            num = num & (num - 1);
            cnt++;
        }
        return cnt;
    }

    bool isPrime(int n)
    {
        if (n < 2)
            return false;
        if (n == 2)
            return true;
        int countDivs = 0;
        for (int i = 2; i < n; i++)
            countDivs += (n % i == 0);
        return !countDivs;
    }
};
