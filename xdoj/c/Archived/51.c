/*
问题描述	
从键盘输入四个整数，找出其中的最大值并将其输出。

输入说明	
输入4个整数，用空格分隔

输出说明	
输出值最大的一个整数
*/

#include <stdio.h>
#define COUNT 4
int main(){
    int user[COUNT];
    for(int i = 0; i < COUNT; i++){
        scanf("%d", &user[i]);
    }

    int max = user[0];
    for(int i = 1; i < COUNT; i++){
        if(user[i] > max){
            max = user[i];
        }
    }
    printf("%d", max);
}