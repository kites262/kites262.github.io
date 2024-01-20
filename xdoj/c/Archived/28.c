/*
标题：计算某月天数
类别：流程控制	
时间限制：2S
内存限制：10000Kb
问题描述：
每年的1，3，5，7，8，10，12月有31天，4，6，9，11月有30天，闰年2月29天，其他年份2月28天，给定年份和月份求该月的天数
*/
#include <stdio.h>

int isLeap(int year){
    return (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 1 : 0);
}

int main(){
    const int days_isLeap0[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    const int days_isLeap1[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

    int year, month, days;
    scanf("%d %d", &year, &month);

    if(isLeap(year)){
        days = days_isLeap1[month-1];
    }else{
        days = days_isLeap0[month-1];
    }

    printf("%d", days);
}
/*
输入说明：
输入由两个正整数a和b构成，a表示年份，b表示月份，a和b之间用空格分隔

输出说明：
根据年份和月份计算该月天数并输出

输入样例	
输入样例1
2000 3
输入样例2
2001 2
输出样例	
输出样例1
31
输出样例2
28
*/