/*
请写一个程序，给出指定整数范围[a，b]内的所有完数，0 < a < b < 10000。
一个数如果恰好等于除它本身外的所有因子之和，这个数就称为"完数"。
例如6是完数，因为6=1＋2＋3

输入说明	
输入为两个整数a和b，a和b之间用空格分隔

输出说明	
输出[a，b]内的所有完数，每个数字占一行
*/

#include <stdio.h>

int isOK(int num){
    int sum = 0;
    for(int i = 1; i <= 0.5*num; i++){
        sum += (num%i == 0) ? i : 0;
    }
    return (sum == num) ? 1 : 0;
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++){
        if(isOK(i)) printf("%d\n", i);
    }
}