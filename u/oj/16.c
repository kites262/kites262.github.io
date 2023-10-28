/*
1.	字符输入输出
问题描述：
通过键盘输入5个大写字母，输出其对应的小写字母，并在末尾加上“！”。

输入说明：
5个大写字母通过键盘输入，字母之间以竖线“|”分隔。

输出说明：
输出5个大写字母对应的小写字母，之间无分隔，并在末尾加上‘！’。

输入样例：
H|E|L|L|O

输出样例：
hello!

*/
#include <stdio.h>

int main(){
    char a,b,c,d,e;
    scanf("%c|%c|%c|%c|%c", &a, &b, &c, &d, &e);
    printf("%c", a+32);
    printf("%c", b+32);
    printf("%c", c+32);
    printf("%c", d+32);
    printf("%c", e+32);
    printf("!");
}