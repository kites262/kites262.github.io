/*
问题描述	
给定一个年份y和一个整数d，问这一年的第d天是几月几日？   
注意闰年的2月有29天，且满足下面条件之一的是闰年：   
1） 年份是4的整数倍，而且不是100的整数倍；
2） 年份是400的整数倍

输入说明	
输入包含两个整数y和d，y表示年份，年份在1900到2018之间（包含1900和2018）。 d表示这一年的第几天，d在1至365之间。

输出说明	
在一行输出两个整数，分别表示答案的月份和日期。
*/
#include <stdio.h>

int isLeapYear(int year){
    return (
        (year%400 == 0) || (year%4 == 0 && year%100 != 0));
}

int main(){
    int year, index;
    scanf("%d %d", &year, &index);
    
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int remain = index -1;
    int month = 1, day = 1;

    if(isLeapYear(year)) days[2] = 29;

    for(int i = 1; i <= 12; i++){
        if(remain < days[i]){
            day = remain + 1;
            break;
        }
        month++;
        remain = remain - days[i];
    }

    printf("%d %d", month, day);
}