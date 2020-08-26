#include <cstdio>
using namespace std;

struct Cmd
{
    int luX, luY;
    int rbX, rbY;
};

int Overlap(Cmd a, Cmd b);

int main()
{
    int iX, iY, iI;
    scanf("%d %d %d", &iX, &iY, &iI);
    Cmd cmd[iI + 1];
    for (int i = 1; i <= iI; i++)
        scanf("%d %d %d %d", &cmd[i].luX, &cmd[i].luY, &cmd[i].rbX, &cmd[i].rbY);
    int tot = 0;
    for (int i = iI; i >= 1; i--)
    {
        tot += (cmd[i].rbX - cmd[i].luX + 1) * (cmd[i].rbY - cmd[i].luY + 1);
        for (int j = iI; j > i; j--)
        {
            tot = tot - Overlap(cmd[i], cmd[j]);
        }
    }
    printf("%d", tot);
    return 0;
}

int Overlap(Cmd a, Cmd b)
{
    int s = 0;
    if ((b.rbX >= a.luX || b.luX <= a.rbX) && (a.rbY >= b.luY || a.luY <= b.rbY))
    {
        s = a.luX > b.luX ? b.rbX - a.luX + 1 : a.rbX - b.luX + 1;
        s = s * (a.luY > b.luY ? b.rbY - a.luY + 1 : a.rbY - b.luY + 1);
    }
    return s;
}