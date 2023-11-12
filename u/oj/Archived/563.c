#include <stdio.h>
#define MAXLIST 10000

int isPrime(int n){
    int flag = (n == 1 ? 0 : 1);
    for(int i = 2; i <= n/2; i++){
        if(n%i == 0){
            flag = 0;
            break;
        }
    }

    return flag;
}

int main(){
    int user;
    scanf("%d", &user);
    
    int list[MAXLIST];
    int len = 0;
    for(int i = 2; i < user; i++){
        if(isPrime(i)){
            list[len] = i;
            len++;
        }
    }

    for(int i = 2; i < len; i++){
        if(list[i] - list[i-1] == 2) printf("%d %d\n", list[i-1], list[i]);
    }

    if(user < 5) printf("empty");

    return 0;
}