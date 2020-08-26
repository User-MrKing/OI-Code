#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char num[1001];
    int m;
    scanf("%d", &m);
    scanf("%s", num + 1);
    int len = strlen(num + 1);
    printf("%c*%d^%d", num[1], m, len - 1);
    for (int i = 2; i <= len; i++)
        if (num[i] != '0')
            printf("+%c*%d^%d", num[i], m, len - i);
    return 0;
}