/*
编程实现：输入一自然数 n，求组成 n^3 的 n 个连续奇数。
输入说明
一个正整数 n，0<n<30。
输出说明
输出 n 个连续奇数，数据之间用空格隔开，并换行
*/

/**
 * 观察发现，如果用户输入n
 * 在分解的时候，第一位数字总是: n*n - n + 1
*/
#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    int first = num*num - num + 1;
    for(int i = 0; i < num; i++){
        int now = first + i*2;
        printf("%d", now);
        
        if(i != num-1) printf(" ");
    }
}