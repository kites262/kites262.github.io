#include <stdio.h>

int fac(int n){
    int r = 1;
    for(int i = 2; i <= n; i++){
        r *= i;
    }
    return r;
}

int main(){
    int user;
    scanf("%d", &user);
    
    for(int i = 1; i <= user; i++){
        printf("%d ", fac(i));
    }

    return 0;
}