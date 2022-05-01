class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n == 1 || n == 4)
            return true;

        if (n % 4 == 2 || n % 4 == 1 || n % 4 == 3 || n == 0)
            return false;

        return isPowerOfFour(n / 4);
    }
};