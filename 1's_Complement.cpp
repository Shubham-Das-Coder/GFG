/*
Link of the question : https://practice.geeksforgeeks.org/problems/1s-complement2819/1#
*/
class Solution
{
public:
    string onesComplement(string S, int N)
    {
        string ans = "";
        for (int i = 0; i < N; i++)
        {
            if (S[i] == '0')
                ans += '1';
            else
                ans += '0';
        }
        return ans;
    }
};