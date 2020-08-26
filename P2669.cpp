#include <cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int tot = 0;
    for (int i = 1;; i++)
    {
        for (int j = 1; j <= i && n > 0; j++)
            tot += i, n--;
        if (!n)
        {
            printf("%d", tot);
            break;
        }   
    }
    return 0;
}