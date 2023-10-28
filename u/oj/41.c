/*
给出一组PM2.5数据，按以下分级标准统计各级天气的天数，并计算出PM2.5平均值。
PM2.5分级标准为：
一级优（0<=PM2.5<=50）
二级良（51<=PM2.5<=100为）
三级轻度污染（101<=PM2.5<=150）
四级中度污染（151<=PM2.5<=200）
五级重度污染（201<=PM2.5<=300）
六级严重污染（PM2.5>300）


输入说明	
输入分为两行，
第一行是一个整数n表示天数（1<n<=100）；
第二行为n个非负整数Pi（0<=Pi<=1000），表示每天的PM2.5值，整数之间用空格分隔。

输出说明	
输出两行数据，
第一行为PM2.5平均值，结果保留2位小数；
第二行依次输出一级优，二级良，三级轻度污染，四级中度污染，五级重度污染，六级严重污染的天数。
*/

// Using Pointer, a little f**k out
#include <stdio.h>

#define LEVEL_1 50
#define LEVEL_2 100
#define LEVEL_3 150
#define LEVEL_4 200
#define LEVEL_5 300

int l1 = 0;
int l2 = 0;
int l3 = 0;
int l4 = 0;
int l5 = 0;
int l6 = 0;

int makeLevel(int value){
    if(value <= LEVEL_1) l1++;
    else if(value <= LEVEL_2) l2++;
    else if(value <= LEVEL_3) l3++;
    else if(value <= LEVEL_4) l4++;
    else if(value <= LEVEL_5) l5++;
    else l6++;
}

double average(int *a, int count){
    int sum = 0;
    for(int i = 0; i < count; i++){
        sum += *a;
        a++;
    }

    return (double)sum/count;
}

int main(){
    int day[100];
    int days;
    
    scanf("%d", &days);
    
    for(int i = 0; i < days; i++){
        scanf("%d", &day[i]);
        makeLevel(day[i]);
    }

    printf("%.2f\n", (double)average(&day[0], days));
    printf("%d %d %d %d %d %d", l1, l2 ,l3 ,l4, l5 ,l6);
}