class Solution
{
public:
    int countCamelCase(string s)
    {
        string a = "";
        for (auto c : s)
        {
            if (isupper(c))
            {
                a += c;
            }
        }
        int x = a.length();
        return x;
    }
};