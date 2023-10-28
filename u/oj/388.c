/*
输入5个字符，统计其中字符a的个数。每个字符以空格间隔,大写A
也算

输入1：
a b c d e

输出1：
1

输入2：
a A b c a

输出2：
3

*/
#include <stdio.h>

int main(){
    char a[5];
    int count = 0;
    scanf("%c %c %c %c %c", &a[0], &a[1], &a[2], &a[3], &a[4]);

    for(int i = 0; i < 5; i++){
        if( a[i] == 'a' || a[i] == 'A'){
            count += 1;
        }
    }

    printf("%d", count);
    
}