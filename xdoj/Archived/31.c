/*
最大公约数（GCD）指某几个整数共有因子中最大的一个，最大公约数具有如下性质，
gcd(a,0)=a
gcd(a,1)=1
因此当两个数中有一个为0时，gcd是不为0的那个整数，
当两个整数互质时最大公约数为1。
输入两个整数a和b，求最大公约数

输入说明：
输入为两个非负整数a和b（0<=a,b<10000），a和b之间用空格分隔，

输出说明：
输出其最大公约数
*/
#include <stdio.h>

int min(int a, int b){
    return (a>b) ? a : b;
}

int main(){
    int gcd = 1;
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i = gcd; i <= min(a,b); i++){
        if(a%i == 0 && b%i == 0) gcd = i;
    }

    printf("%d", gcd);
}