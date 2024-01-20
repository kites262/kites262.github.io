#include <stdio.h>
/**
 * 本题可以用动态规划来解决，但是我不会
 * 
 * 我的算法就是穷尽，很暴力，但很简单
 * 动态规划的话，程序效率会很高
 * 
 * 以后学了动态规划再说吧……
*/

int main(){
    int user;
    scanf("%d", &user);
    
    int a[10000];
    for(int i = 0; i < user; i++){
        scanf("%d", &a[i]);
    }

    int max = 0;
    for(int i = 0; i < user; i++){
        for(int j = 1; j < user; j++){
            int sum = 0;
            for(int x = i; x <= j; x++){
                sum += a[x];
            }

            if(sum > max) max = sum;
        }
    }

    printf("%d", max);
}