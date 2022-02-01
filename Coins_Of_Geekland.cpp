class Solution
{

public:
    int Maximum_Sum(vector<vector<int>> &mat, int N, int K)
    {
        int p[N + 1][N + 1];
        for (int i = 0; i <= N; i++)
        {
            p[i][0] = 0;
            p[0][i] = 0;
        }
        int mx = INT_MIN;
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                int x = i - 1, y = j - 1;
                p[i][j] = mat[x][y] + p[x][j] + p[i][y] - p[x][y];
                if (i >= K && j >= K)
                {
                    mx = max(mx, p[i][j] - p[i][j - K] - p[i - K][j] + p[i - K][j - K]);
                }
            }
        }
        return mx;
    }
};
