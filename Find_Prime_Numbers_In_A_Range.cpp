class Solution
{
public:
    int isPrime(int N)
    {
        if (N == 2)
        {
            return 1;
        }
        if (N < 2 || N % 2 == 0)
        {
            return 0;
        }
        for (int i = 3; i * i <= N; i += 2)
        {
            if (N % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
    vector<int> primeRange(int M, int N)
    {
        vector<int> ans;
        for (int i = M; i <= N; i++)
        {
            if (isPrime(i))
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};