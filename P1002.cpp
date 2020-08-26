#include <cstdio>
#include <cstring>
using namespace std;
const int xMove[] = {-2, -1, 1, 2, 2, 1, -1, -2};
const int yMove[] = {1, 2, 2, 1, -1, -2, -2, -1};
int main()
{
    int n, m, hn, hm;
    scanf("%d %d %d %d", &n, &m, &hn, &hm);
    unsigned long long a[n + 1][m + 1];
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++)
            a[i][j] = 1;
    a[0][0] = 0;
    a[1][0] = 0;
    a[0][1] = 0;
    a[hn][hm] = 0;
    for (int i = 0; i < 8; i++)
        a[hn + xMove[i]][hm + yMove[i]] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == 0)
                continue;
            else
                a[i][j] = a[i - 1][j] + a[i][j - 1];
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
            printf("%2d ", a[i][j]);
        putchar('\n');
    }
    return 0;
}