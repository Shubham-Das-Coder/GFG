class Solution
{
public:
    int superPrimes(int n)
    {
        int p[n + 1];
        memset(p, 1, sizeof(p));
        p[0] = p[1] = 0;
        for (int i = 2; i <= n; i++)
        {
            if (p[i])
            {
                for (int j = i * 2; j <= n; j += i)
                {
                    p[j] = 0;
                }
            }
        }
        int c = 0;
        for (int i = 4; i <= n; i++)
        {
            if (p[i] && p[i - 2])
            {
                c++;
            }
        }
        return c;
    }
};