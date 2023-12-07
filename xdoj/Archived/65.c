#include <stdio.h>

int getSum(int num){
    int r = 0;
    while(num>0){
        r += num % 10;
        num /= 10;
    }

    return r;
}

int main(){
    int user;
    scanf("%d", &user);
    
    while(user >= 10){
        user = getSum(user);
    }

    printf("%d", user);
}