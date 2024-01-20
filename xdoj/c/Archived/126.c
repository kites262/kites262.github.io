/*
题目：购房贷款计算
时间限制：1S
内存限制：10000Kb
问题描述：
购房从银行贷了一笔款d,准备每月还款额为P，月利率为r,计算多少月能还清。

输入说明：
输入三个浮点数，分别表示贷款，每月还款额与月利率，三个浮点数之间用空格分隔。
输出说明：
输出以个浮点数，表示还清贷款的月数，小数点后保留2位小数。
输入样例：
300000 6000 0.01
输出样例：
69.66
*/
#include <stdio.h>
#include <math.h>

int main(){
    int total,per;
    float rate, count;

    scanf("%d %d %f", &total, &per, &rate);

    count = (
        log10(
            (double)per
            /((double)per - total * rate)))
        /log10(1.0 + rate);

    printf("%.2f", count);
}