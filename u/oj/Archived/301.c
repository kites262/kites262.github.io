#include <stdio.h>

/**
 * parse factors from num
 * store result to tar[]
 * and return the number of factors
*/
int praseFactor(int num, int tar[]){
    int index = 0;
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            tar[index] = i;
            index++;
        }
    }
    return index;
}

/*
                   _ooOoo_
                  o8888888o
                  88" . "88
                  (| -_- |)
                  O\  =  /O
               ____/`---'\____
             .'  \\|     |//  `.
            /  \\|||  :  |||//  \
           /  _||||| -:- |||||-  \
           |   | \\\  -  /// |   |
           | \_|  ''\---/''  |   |
           \  .-\__  `-`  ___/-. /
         ___`. .'  /--.--\  `. . __
      ."" '<  `.___\_<|>_/___.'  >'"".
     | | :  `- \`.;`\ _ /`;.`/ - ` : | |
     \  \ `-.   \_ __\ /__ _/   .-` /  /
======`-.____`-.___\_____/___.-`____.-'======
                   `=---='
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
            佛祖保佑       永无BUG
*/

int getSum(int tar[], int n){
    int r = 0;
    for(int i = 0; i < n; i++){
        r += tar[i];
    }
    return r;
}

int main(){
    int user1 = 220;
    scanf("%d", &user1);
    int g1[500];
    int n1 = praseFactor(user1, g1);
    int s1 = getSum(g1, n1);

    int user2 = 284;
    scanf("%d", &user2);
    int g2[500];
    int n2 = praseFactor(user2, g2);
    int s2 = getSum(g2, n2);

    printf("%s ", 
        s1 == user2 && s2 == user1 ? "yes" : "no");
    printf("%d %d", n1, n2);
}
