/*
问题描述	
小明决定申请一个新的QQ号码，系统随机生成了若干个号码供他选择。小明的选号原则是：
1. 选择所有号码中各位数字之和最大的号码。
2. 如果有多个号码各位数字之和相同则选择数值最大的号码。
请你写一个程序帮助小明选择一个QQ号码。

输入说明	
输入数据由两行构成，
第一行为一个整数n表示有n个待选号码(0<n<100)，
第二行有n个正整数，表示各个待选的号码，
每个号码长度不超过9位数。
每个号码之间用空格分隔，且每个号码都不相同。

输出说明	
输出根据小明的选号原则选出的号码。
*/
#include <stdio.h>

int sum(int num){
    int s = 0;

    while(num > 0){
        s = s + num%10;
        num = num/10;
    }

    return s;
}

int main(){
    int user[100];
    int maxSum = 0, maxNumber = 0;
    int count;

    scanf("%d", &count);

    for(int i = 0; i < count; i++){
        scanf("%d", &user[i]);
    }
    
    for(int i = 0; i < count; i++){
        int temp = sum(user[i]);

        if(temp > maxSum || (temp == maxSum && maxNumber == user[i])){
            maxSum = temp;
            maxNumber = user[i];
        }
    }

    printf("%d\n", maxNumber);
}
