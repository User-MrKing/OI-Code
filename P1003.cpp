#include <cstdio>
#include <cstring>
using namespace std;
struct Carpet
{
    int x, y, lx, ly;
};
Carpet aCar[10001];
int main()
{
    int n;
    int rx, ry;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d %d %d %d", &aCar[i].x, &aCar[i].y, &aCar[i].lx, &aCar[i].ly);
    scanf("%d%d", &rx, &ry);
    for (int i = n; i >= 1; i--)
    {
        if (aCar[i].x <= rx && rx <= aCar[i].x + aCar[i].lx && aCar[i].y <= ry && ry <= aCar[i].y + aCar[i].ly)
        {
            printf("%d", i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}