class Solution
{
public:
    int findPosition(int N)
    {
        int ans = -1;
        int count = 1;
        while (N > 0)
        {
            if (N % 2 == 1)
            {
                if (ans != -1)
                {
                    return -1;
                }
                ans = count;
            }
            N /= 2;
            count++;
        }
        return ans;
    }
};