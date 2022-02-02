class Solution
{
public:
    long long int find_fact(int n)
    {
        long int fact = 1;
        while (n)
        {
            fact *= n;
            n--;
        }
        return fact;
    }
};