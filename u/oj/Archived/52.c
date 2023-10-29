/*
问题描述	
从键盘输入一个字符，若为小写字母，则输出其对应的大写字母；若为大写字母，则输出对应的小写字母；其他字符原样输出。

输入说明	
输入一个字符

输出说明	
输出一个字符
*/
#include <stdio.h>

int main(){
    char user;
    scanf("%c", &user);

    if('a' <= user && user <= 'z') user = user - 32;
    if('A' <= user && user <= 'Z') user = user + 32;

    printf("%c", user);
}