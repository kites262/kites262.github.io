#include <stdio.h>

int getSum(int num){
    int r = 0;
    while(num > 0){
        r += num % 10;
        num /= 10;
    }
    return r;
}

/**
 * parse int Array from a number
 * return the digits of that array
 * 
 * tar= target
 * num= number
*/
int parseArray(int num, int tar[]){
    tar[0] = num;
    int digits = 0;
    for(int i = 0; i <= digits; i++){
        if(tar[i] >= 10){
            tar[i+1] = tar[i]/10;
            tar[i] = tar[i]%10;
            digits++;
        }
    }
}

int isOK(int num[], int count){
    

    int flag = 1;
    for(int i = 0; i <= count/2; i++){
        if(num[i] != num[count-1-i]) flag = 0;
    }
    return flag;
}

int main(){
    int user;
    scanf("%d", &user);
    
    int tar[10];
    int count = parseArray(user, tar);
    int flag = isOK(tar, count);
    
    if(flag) printf("%d", getSum(user));
    else printf("no");
}