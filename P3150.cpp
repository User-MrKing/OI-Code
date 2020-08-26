#include <cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    for (long long i = 1, m; i <= n; i++)
    {
        scanf("%lld", &m);
        if (m % 2 == 1)
            printf("zs wins\n");
        else
            printf("pb wins\n");
    }
    return 0;
}