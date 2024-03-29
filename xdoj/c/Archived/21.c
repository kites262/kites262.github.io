/*
1.	数位输出
问题描述：
输入一个5位整数，求出其各数位数值，并按照从高位到低位的顺序输出，如：输入12345，输出为1 2 3 4 5。

输入说明：
输入一个五位正整数。

输出说明：
按数位从高到低依次输出，各数位之间以一个空格相分隔。

输入样例：
96237

输出样例：
    9 6 2 3 7

*/
#include <stdio.h>

int main(){
    char a[5];
    scanf("%c%c%c%c%c", &a[0], &a[1], &a[2], &a[3], &a[4]);
    printf("%c %c %c %c %c", a[0], a[1], a[2], a[3], a[4]);
}

/**
 * 当然有老实一点的做法
#include <stdio.h>

int main(){
    void swaps(char* a, char* b);
    char a[5];
    scanf("%c%c%c%c%c", &a[0], &a[1], &a[2], &a[3], &a[4]);
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4-i; j++){
            if(a[j] > a[j+1]){
                swaps(&a[j], &a[j+1]);
            }
        }
    }
    printf("%c %c %c %c %c", a[0], a[1], a[2], a[3], a[4]);
}

void swaps(char* a, char* b){
    *a = (*a)^(*b);
    *b = (*a)^(*b);
    *a = (*a)^(*b);
}

*/