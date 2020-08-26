#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char str[16];
    scanf("%s", str + 1);
    int len = strlen(str + 1);
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
            putchar('#');
        else
            putchar('.');
        switch (i)
        {
        case 1:
        case 5:
            for (int j = 1; j <= len; j++)
                if (j % 3 == 0)
                    printf(".*..");
                else
                    printf(".#..");
            putchar('\n');
            break;
        case 2:
        case 4:
            for (int j = 1; j <= len; j++)
                if (j % 3 == 0)
                    printf("*.*.");
                else
                    printf("#.#.");
            putchar('\n');
            break;
        case 3:
            for (int j = 1; j <= len; j++)
                if ((j % 3 == 2 && len != j) || (j % 3 == 0))
                    printf(".%c.*", str[j]);
                else
                    printf(".%c.#", str[j]);
            putchar('\n');
            break;
        }
    }
    return 0;
}