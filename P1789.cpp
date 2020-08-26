#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    n += 10;
    bool mp[n + 11][n + 11];
    memset(mp, true, sizeof(mp));
    for (int i = 1, x, y; i <= m; i++)
    {
        scanf("%d%d", &x, &y);
        x += 10;
        y += 10;
        mp[x + 2][y] = false;
        mp[x + 1][y] = false;
        mp[x][y] = false;
        mp[x - 1][y] = false;
        mp[x - 2][y] = false;
        mp[x][y + 2] = false;
        mp[x][y + 1] = false;
        mp[x][y - 1] = false;
        mp[x][y - 2] = false;
        mp[x + 1][y + 1] = false;
        mp[x + 1][y - 1] = false;
        mp[x - 1][y + 1] = false;
        mp[x - 1][y - 1] = false;
    }
    for (int i = 1, x, y; i <= k; i++)
    {
        scanf("%d%d", &x, &y);
        x += 10;
        y += 10;
        for (int j = x - 2; j <= x + 2; j++)
            for (int z = y - 2; z <= y + 2; z++)
                mp[j][z] = false;
    }
    int tot = 0;
    for (int i = 11; i <= n; i++)
    {
        for (int j = 11; j <= n; j++)
            if (mp[i][j])
                tot++;
    }
    printf("%d", tot);
    return 0;
}