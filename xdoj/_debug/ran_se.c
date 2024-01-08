#include <stdio.h>

void paint(int n, int (*l)[4], int *result)
{
    int a[101][101] = {0};
    int t;

    for (int i = 0; i < n; i++)
    {
        for (int j = l[i][0]; j < l[i][2]; j++)
            for (int k = l[i][1]; k < l[i][3]; k++)
            {
                a[j][k]++; // 染色
            }
    }

    int max = 0;
    int k = 0;
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
        {
            if (a[i][j] > max)
                max = a[i][j];
        } // 找出染色最多的次数

    {
        for(int i = 0; i < max*2; i++){
            result[i] = 0;
        }
    }

    for (int i = 0; i <= max * 2; i += 2)
        result[i] = max - i / 2; // 先表示染色次数

    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
        {
            k = (max - a[i][j]) * 2;
            result[k + 1]++; // 各染色次数对应个数
        }
}

int main()
{
    int n, l[100][4];
    int result[300];
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d%d%d%d", &l[i][0], &l[i][1], &l[i][2], &l[i][3]);
    }

    paint(n, l, result);
    for (i = 0; i <= result[0]; i++)
    {
        printf("%d %d\n", result[i * 2], result[i * 2 + 1]);
    }

    return 0;
}
