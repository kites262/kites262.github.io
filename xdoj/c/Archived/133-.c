//0xFFFFFFFFCAFEBABE
/*
问题描述
一元 n 次多项式𝑝0𝑋𝑒0 + 𝑝1𝑋𝑒1 + ⋯ + 𝑝𝑖𝑋𝑒𝑖 + ⋯ + 𝑝𝑛𝑋𝑒𝑛 项数较少时成为一元稀疏多项式，
例如：3 + 6𝑋3 − 2𝑋8 + 12𝑋20是一个一元稀疏多项式。设计一个一元稀疏多项式计算器程
序完成两个一元稀疏多项式的加减法，输出结果多项式的各项系数和指数。
输入说明
输入数据第 1 行为 3 个正整数 n，m，t。其中 n 表示第一个多项式的项数，m 表示第二个
多项式的项数，t 表示运算类型，0 为加法，1 为减法。数据的第 2 行包含 2n 个整数，每两
个整数分别表示第一个多项式每一项的系数和指数；第 3 行包含 2m 个整数，每两个整数分
别表示第二个多项式每一项的系数和指数。两个多项式的每项是按照指数递增的形式给出的，
例如对于多项式3 + 6𝑋3 − 2𝑋8 + 12𝑋20，对应的输入为 3 0 6 3 -2 8 12 20
输出说明
运算结果按指数从低到高的顺序在以多项式形式（见输出样例）输出结果，注意系数为负数
时输出减号，系数为 0 时不输出该项，指数为 1 时不输出指数。
输入样例
6 2 0
1 0 1 1 1 2 1 3 1 4 1 5
-1 3 -1 4
输出样例
1+x+x^2+x^5
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n, m, t;
    scanf("%d %d %d", &n, &m, &t);
    int typ[700] = {0};

    for (int i = 0; i < n; ++i) {
        int v, exp;
        scanf("%d %d", &v, &exp);
        typ[100 + exp] += v;
    }

    for (int i = 0; i < m; ++i) {
        int v, exp;
        scanf("%d %d", &v, &exp);
        if (t == 0) {
            typ[100 + exp] += v;
        } else {
            typ[100 + exp] -= v;
        }
    }

    int fir = 0;
    int now = -100;
    do {
        if (typ[100 + now] == 0) {
            now++;
            continue;
        }
        if (now == 0) {
            printf("%d", typ[100 + now]);
            fir = 1;
        } else {
            int value = typ[100 + now];
            if (value == 0) {
                now++;
                continue;
            }
            if (value > 0) {
                if (fir == 1) {
                    printf("+");
                } else {
                    fir = 1;
                }
            }
            if (value == 1 || value == -1) {
                if (value == -1) {
                    printf("-");
                }
                if (now == 1) {
                    printf("x");
                } else {
                    printf("x^%d", now);
                }
            } else {
                if (now == 1) {
                    printf("%dx", value);
                } else {
                    printf("%dx^%d", value, now);
                }
            }

        }
        now++;
    } while (now < 500);

    return 0;
}