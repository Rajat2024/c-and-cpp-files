class Solution
{
    int xn[4] = {1, -1, 0, 0};
    int yn[4] = {0, 0, 1, -1};
    int M = 1e9 + 7;

public:
    int memo[51][51][51];
    int find(int m, int n, int k, int i, int j)
    {
        if (k >= 0 && (i == m || j == n || i == -1 || j == -1))
            return 1;
        if (k < 0)
            return 0;

        if (memo[i][j][k] != -1)
            return memo[i][j][k];
        int ans = 0;
        for (int l = 0; l < 4; l++)
        {
            ans = ans + (find(m, n, k - 1, i + xn[l], j + yn[l]) % M);
        }
        ans = ans % M;
        return memo[i][j][k] = ans;
    }
    int findPaths(int m, int n, int k, int i, int j)
    {
        memset(memo, -1, sizeof(memo));
        return find(m, n, k, i, j);
    }
};