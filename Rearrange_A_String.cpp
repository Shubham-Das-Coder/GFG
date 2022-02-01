class Solution
{
public:
    string arrangeString(string str)
    {
        vector<int> f(26, 0);
        int sum = 0;
        for (auto e : str)
        {
            if (e >= 'A' && e <= 'Z')
            {
                f[e - 'A']++;
            }
            else
            {
                sum += e - '0';
            }
        }
        string ans;
        for (int i = 0; i < 26; i++)
        {
            while (f[i])
            {
                ans.push_back('A' + i);
                f[i]--;
            }
        }
        return (ans + to_string(sum));
    }
};