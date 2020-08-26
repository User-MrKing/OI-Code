#include <cstdio>
using namespace std;
int js(int a);
int main()
{
    int n;
    scanf("%d", &n);
    char str[n + 1];
    int num[n + 1];
    scanf("%s", str + 1);
    for (int i = 1; i <= n; i++)
        num[i] = str[i] - 48;
    int tot = 0;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = i + 1; j <= n; j++)
            if (num[j] < num[i])
                sum++;
        tot += sum * js(n - i);
    }
    printf("%d", ++tot);
    return 0;
}
int js(int a)
{
    int tot = 1;
    for (int i = 2; i <= a; i++)
        tot *= i;
    return tot;
}