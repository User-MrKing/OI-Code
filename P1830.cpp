#include <cstdio>
#include <cstring>
using namespace std;
struct Point
{
    int last = 0, times = 0;
};

int main()
{
    int n, m, x, y;
    scanf("%d %d %d %d", &n, &m, &x, &y);
    Point city[n + 1][m + 1];
    for (int i = 1, x1, y1, x2, y2; i <= x; i++)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for (int j = x1; j <= x2; j++)
            for (int k = y1; k <= y2; k++)
            {
                city[j][k].times++;
                city[j][k].last = i;
            }
    }
    for (int i = 1, rx, ry; i <= y; i++)
    {
        scanf("%d %d", &rx, &ry);
        putchar(city[rx][ry].times == 0 ? 'N' : 'Y');
        if (city[rx][ry].times != 0)
            printf(" %d %d\n", city[rx][ry].times, city[rx][ry].last);
    }
    return 0;
}