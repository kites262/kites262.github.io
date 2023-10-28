/*
假设n是一个由最多9位数字（d9, …, d1）组成的正整数。编写一个程序计算n的每一位数字之和
输入说明:	
输入数据为一个正整数n
输出说明:	
对整数n输出它的各位数字之和后换行
*/
#include <stdio.h>

int main(){
    int n;
    int sum = 0;
    
    scanf("%d", &n);

    for(int i = 0; i < 9; i++){
        sum += n%10;
        n /= 10;
    }

    printf("%d\n", sum);
}
/*
输入样例:	
3704

输出样例:	
14
*/