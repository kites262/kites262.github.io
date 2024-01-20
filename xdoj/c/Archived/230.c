#include <stdio.h>

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

int fun(int n, int tar[]){
    int r = 0;
    for(int i = 2; i <= n; i++){
        if(isPrime(i)){
            tar[r] = i;
            r++;
        }
    }
    return r;
}

int main(){
    int user;
    scanf("%d", &user);
    
    int a[256]; //1000内有160多个素数
    int l = fun(user, a);

    printf("%d\n", l);
    for(int i = 0; i < l; i++){
        printf("%d ", a[i]);
    }

    return 0;
}