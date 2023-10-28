/*
标题	
除法计算器

类别
基本计算

时间限制	
1S

内存限制	
256Kb

问题描述	
小明的弟弟刚开始学习除法，为了检查弟弟的计算结果是否正确，小明决定设计一个简单计算器程序来验算。

输入说明	
输入数据由四个整数m，n，q，r构成，m为被除数，n为除数，q和r为小明的弟弟计算出的商和余数。整数之间用空格分隔，所有整数取值范围在（-100000~100000），n不为0。

输出说明	
如果验算结果正确，输出yes，否则输出正确的商和余数

输入样例	
输入样例：
样例1：
10 3 3 1
样例2：
10 3 3 2

输出样例	
样例1输出：
yes
样例2输出：
3 1
*/
#include <stdio.h>

int main(){
    int m, n, a, b;
    scanf("%d %d", &m ,&n);
    int q = m/n;
    int r = m % n;
    scanf("%d %d", &a, &b);

    if(a != q | b !=r){
        printf("%d %d", q, r);
    }else{
        printf("yes");
    }
}