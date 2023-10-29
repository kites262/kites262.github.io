/*
问题描述	
给出一个百分制的成绩，要求输出成绩等级'A','B','C','D','E'。90分以上为'A'，80~89分为'B',70~79分为'C',60~69分为'D'，60分以下为'E'。

输入说明	
输入一个正整数m（0<=m<=100）

输出说明	
输出一个字符
*/
#include <stdio.h>

int main(){
    const char LEVELS[11] = {'A' ,'A', 'B', 'C', 'D', 'E', 'E', 'E', 'E', 'E', 'E'};
    int score;
    scanf("%d", &score);

    int index = 10 - score/10;

    printf("%c", LEVELS[index]);
}