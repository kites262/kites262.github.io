/*
1.	四则运算
问题描述：
输入两个整数和一个四则运算符，根据运算符计算并输出其运算结果（和、差、积、商、余之一）。注意做整除及求余运算时，除数不能为零。

输入说明：
使用scanf()函数输入两个整数和一个运算符，格式见输入样例。

输出说明：
输出使用printf()函数，格式见输出样例。

输入样例：
5%2

输出样例：
     5%2=1

*/
#include <stdio.h>

int main(){
    short int a, b;
    char c;

    scanf("%hd%c%hd", &a, &c, &b);
    switch(c){
        case '%':
        printf("%d%%%d=%d",a,b,a%b);
        break;
        
        case '+':
        printf("%d+%d=%d",a,b,a+b);
        break;

        case '-':
        printf("%d-%d=%d",a,b,a-b);
        break;

        case '/':
        printf("%d/%d=%d",a,b,a/b);
        break;

        case '*':
        printf("%d*%d=%d",a,b,a*b);
        break;
    }
}