/*
题目描述：输入一个三位数整数，求其百位、十位和个位数字之和。

输入格式：共一行，输入一个三位整数。

输出格式：共一行，输出一个整数。

示例：
输入：128
输出：11
*/
#include <stdio.h>

int main(){
    char a, b, c;
    scanf("%c%c%c", &a, &b, &c);

    printf("%d", a+b+c-144);
}