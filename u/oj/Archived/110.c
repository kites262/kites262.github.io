/**
 * 出题人的锅，在线检测系统检测中文有漏洞
 * 
 * 需要自己在本地把.c文件改成ANSI编码
*/
#include <stdio.h>

int main(){
    short int n;
    scanf("%hd", &n);

    printf("%s\n", n%2==0?"是":"否");
}