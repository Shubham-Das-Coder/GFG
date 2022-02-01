class Solution
{
public:
    int sumOfDigits(int N)
    {
        int s = 0;
        while (N > 0)
        {
            s += N % 10;
            N /= 10;
        }
        return s;
    }
};