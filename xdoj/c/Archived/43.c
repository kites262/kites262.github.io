/*
问题描述	
给出一个整数n（0<=n<=100000000）。求出该整数的位数，以及组成该整数的所有数字中的最大数字和最小数字。

输入说明	
输入一个整数n（0<=n<=100000000）

输出说明	
在一行上依次输出整数n的位数，以及组成该整数的所有数字中的最大数字和最小数字，各个数字之间用空格分隔。
*/
#include <stdio.h>

int main(){
    int user, temp, max, min;
    int num[10]= {0,0,0,0,0,0,0,0,0,0};
    int count = 0;

    scanf("%d", &user);
    temp = user;

    int hasNext = 1;
    while(hasNext){
        if(temp != 0){
            num[count] = temp % 10;
            temp = temp/10;
            count++;
        }else{
            hasNext = 0;
        }
    }

    if(user == 0) count++;

    max = num[0];
    min = num[0];
    for(int i = 0; i < count; i++){
        if(max < num[i]) max = num[i];
        if(min > num[i]) min = num[i];
    }

    printf("%d %d %d", count, max ,min);
}
/*
输入样例	
217

输出样例	
3 7 1
*/