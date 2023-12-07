/*问题描述	
已知abc+cba=n，其中a,b,c均为一位数，1000<n<2000,编程求出满足条件的a,b,c所有组合。

输入说明	
一个整数n

输出说明	
按照整数abc从小到大的顺序,输出a, b, c, 用空格分隔，每输出一组a，b，c后换行.*/

#include <stdio.h>

int main(){
    int n, a, b, c;

    scanf("%d", &n);

    for(a = 0; a <= 9; a++){
        for(b = 0; b <= 9; b++){
            for(c = 1; c <=9; c++){
                int left = a*101 + b*20 + c*101;
                if(left == n){
                    printf("%d %d %d\n", a ,b, c);
                }
            }
        }
    }
}