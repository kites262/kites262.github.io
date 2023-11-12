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

int getFib(int index){
    int r;
    if(index == 1 || index == 2) r = 1;
    else r = getFib(index-1) + getFib(index-2);
    return r;
}

int main(){
    int user;
    scanf("%d", &user);

    int a = getFib(user);

    if(isPrime(a)) printf("yes");
    else printf("%d", a);
}