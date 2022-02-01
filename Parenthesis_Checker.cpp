class Solution
{
public:
    bool ispar(string x)
    {
        stack<char> s;
        if (x.size() % 2 == 1)
        {
            return false;
        }
        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] == '(' || x[i] == '{' || x[i] == '[')
            {
                s.push(x[i]);
            }
            else
            {
                if (s.size() == 0)
                {
                    return false;
                }
                char ch = s.top();
                if (x[i] == ')' && ch != '(')
                {
                    return false;
                }
                else if (x[i] == '}' && s.top() != '{')
                {
                    return false;
                }
                else if (x[i] == ']' && s.top() != '[')
                {
                    return false;
                }
                s.pop();
            }
        }
        if (s.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};