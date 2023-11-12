#include <stdio.h>

int isPrime(int n){
    int flag = (n == 1 ? 0 : 1);
    for(int i = 2; i < n/2; i++){
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
    
    printf("%s", isPrime(user) ? "YES" : "NO");
}