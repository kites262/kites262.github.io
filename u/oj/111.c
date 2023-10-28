/*
题目描述：编写程序，输入一个正整数，判断是否能被5和7同时整除，若可以，则输出yes；否则输出no。

输入格式：输入一个正整数。

输出格式：输出“yes”或“no”。

示例:
输入：35
输出：yes
*/
#include <stdio.h>

int main(){
    short int n;
    scanf("%d", &n);
    printf("%s", (n%5==0 && n%7==0) ? "yes" : "no");
}